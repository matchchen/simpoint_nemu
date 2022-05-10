#include <checkpoint/serializer.h>
#include <monitor/difftest.h>

#include <isa.h>
#include <memory/paddr.h>
#include <monitor/monitor.h>
#include <getopt.h>
#include <stdlib.h>

void init_log(const char *log_file);
void init_mem();
void allocate_mem();
void init_regex();
void init_wp_pool();
void init_device();
void init_engine();

static char *log_file = NULL;
static char *diff_so_file = NULL;

static char *img_file = NULL;
static int batch_mode = false;
static int difftest_port = 1234;

char *cpt_file = nullptr;
char *stats_base_dir = nullptr;
char *config_name = nullptr;
char *workload_name = nullptr;
char *simpoints_dir = nullptr;
char *sdcard_img = nullptr;
int profiling_state = NoSimpoint;
bool checkpointRestoring = false;
bool checkpointTaking = false;
bool triggerpointTaking = false;
int cpt_id = -1;
unsigned profiling_interval = 0;
uint64_t checkpoint_interval = 0;
uint64_t triggerpoint_addr = 0;
uint64_t triggerpoint_cnt = 1;
uint64_t max_insts = 0;

int is_batch_mode() { return batch_mode; }

static inline void welcome() {
#ifdef DEBUG
  Log("Debug: \33[1;32m%s\33[0m", "ON");
  Log("If debug mode is on, A log file will be generated to record every instruction NEMU executes. "
      "This may lead to a large log file. "
      "If it is not necessary, you can turn it off in include/common.h.");
#else
  Log("Debug: \33[1;32m%s\33[0m", "OFF");
#endif

  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to \33[1;41m\33[1;33m%s\33[0m-NEMU!\n", str(__ISA__));
  printf("For help, type \"help\"\n");
}

static void load_ecpt_restorer() {
  char restorer_file[0x80000];//size: SIM_DEVICE_ADDR
  sprintf(restorer_file, "%s/resource/ecpt/build/ecpt.bin", getenv("NEMU_HOME"));

  FILE *fp = fopen(restorer_file, "rb");
  if (fp == NULL) Log("If ecpt restorer is not built, run `make` under $(NEMU_HOME)/resource/ecpt");
  Assert(fp, "Can not open '%s'", restorer_file);
  Log("Opening restorer file: %s", restorer_file);
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  Log("restorer file size: 0x%llx", size);
  Assert(size < MAX_RESTORER_SIZE, "Restorer size = %ld is too large", size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESTORER_START), size, 1, fp);
  assert(ret == 1);

  fclose(fp);

}

static inline long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  Log("The image is %s", img_file);
  Log("diff is %s", diff_so_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(IMAGE_START), size, 1, fp);
  Log("Loading image to 0x%x\n", IMAGE_START);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static inline void parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"              , no_argument      , NULL, 'b'},
    {"log"                , required_argument, NULL, 'l'},
    {"diff"               , required_argument, NULL, 'd'},
    {"port"               , required_argument, NULL, 'p'},
    {"stats-base-dir"     , required_argument, NULL, 'D'},
    {"config-name"        , required_argument, NULL, 'C'},
    {"workload-name"      , required_argument, NULL, 'w'},
    {"simpoint-dir"       , required_argument, NULL, 'S'},
    {"cpt"                , required_argument, NULL, 'c'},
    {"interval"           , required_argument, NULL, 5},
    {"checkpoint-interval", required_argument, NULL, 9},
    {"max-insts"          , required_argument, NULL, 'm'},
    {"help"               , no_argument      , NULL, 'h'},
    {"simpoint-profile"   , no_argument      , NULL, 3},
    {"cpt-id"             , required_argument, NULL, 4},
    {"sdcard-img"         , required_argument, NULL, 6},
    {"betapoint-profile"  , no_argument      , NULL, 7},
    {"triggerpoint"       , required_argument, NULL, 't'},
    {0                    , no_argument      , NULL, 0},
  };
  int o;
  int long_index = 0;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:c:S:D:C:w:m:t:", table, &long_index)) != -1) {
    switch (o) {
      case 3:
        assert(profiling_state == NoSimpoint);
            profiling_state = SimpointProfiling;
        Log("Doing Simpoint Profiling");
        break;
      case 7:
        assert(profiling_state == NoSimpoint);
        profiling_state = BetapointProfiling;
        Log("Doing Betapoint Profiling");
        break;

      case 4: sscanf(optarg, "%d", &cpt_id); break;
      case 5: sscanf(optarg, "%u", &profiling_interval); break;
      case 9:
              sscanf(optarg, "%lu", &checkpoint_interval);
              checkpointTaking = true;
              break;
      case 6: sdcard_img = optarg; break;

      case 'b': batch_mode = true; break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; 
                Log("diff is %s", diff_so_file);
                break;

      case 'D': stats_base_dir = optarg; break;
      case 'w': workload_name = optarg; break;
      case 'C': config_name = optarg; break;

      case 'm':
        sscanf(optarg, "%lu", &max_insts);
        Log("Setting max_insts to %lu", max_insts);
        break;

      case 'c':
        cpt_file = optarg;
        checkpointRestoring = true;
        Log("Doing CheckpointRestoring");
        break;

      case 'S':
        assert(profiling_state == NoSimpoint);
        simpoints_dir = optarg;
            profiling_state = SimpointCheckpointing;
        Log("Doing SimpointCheckpointing");
        break;

      case 't':
        sscanf(optarg, "%lx", &triggerpoint_addr);
        sscanf(argv[optind], "%lu", &triggerpoint_cnt);
        triggerpointTaking = true;
        Log("Doing triggerpointTaking! addr is %lx cnt is %lu", triggerpoint_addr, triggerpoint_cnt);
        break;

      case 1:
        if (img_file != NULL) Log("too much argument '%s', ignored", optarg);
        else img_file = optarg;
        break;

      default:
        printf("Usage: %s [OPTION...] IMAGE\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-c,--cpt=CPT_FILE       restore from CPT FILE\n");
        printf("\t-D,--statdir=STAT_DIR   store simpoint bbv, cpts, and stats in STAT_DIR\n");
        printf("\t-w,--workload=WORKLOAD  the name of sub_dir of this run in STAT_DIR\n");
        printf("\t-S,--simpoint-dir=SIMPOINT_DIR   simpoints dir\n");
        printf("\t-C,--config=CONFIG      running configuration\n");
        printf("\t-t,--triggerpoint=TRIGGERPOINT_ADDR TRIGGERPOINT_CNT triggerpoint address and the count of entering the address\n");
        printf("\t--simpoint-profile      simpoint profiling\n");
        printf("\t--cpt-id                checkpoint id\n");
        printf("\t--interval              simpoint interval\n");
        printf("\t--sdcard-img            sdcard image file\n");
        printf("\n");
        exit(0);
    }
  }
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Open the log file. */
  init_log(log_file);

  allocate_mem();

  if (!checkpointRestoring) {
    /* Fill the memory with garbage content. */
    init_mem();
  }

  /* Perform ISA dependent initialization. */
  init_isa();

  long img_size = 0;
  if (!checkpointRestoring) {
    /* Load the image to memory. This will overwrite the built-in image. */
    img_size = load_img();

#ifdef __ECPT_COMPATIBLE__
    load_ecpt_restorer();
#endif

  }
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();

  if (!checkpointRestoring) {
    /* Initialize differential testing. */
      NEMUASDUT::init_difftest(diff_so_file, img_size, difftest_port);
  }

  /* Display welcome message. */
  welcome();
}
