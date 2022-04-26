#include <isa.h>
#include <checkpoint/serializer.h>
#include <memory/paddr.h>
#include <monitor/monitor.h>
#include "local-include/csr.h"

static const uint32_t img [] = {
  0x800002b7,  // lui t0,0x80000
  0x0002a023,  // sw  zero,0(t0)
  0x0002a503,  // lw  a0,0(t0)
  0x0000006b,  // nemu_trap
};

void init_clint(void);

void init_csr(void) {
  extern void init_csr_exist();
  init_csr_exist();

  cpu.mode = MODE_M;
  mstatus->uxl = 2;
  mstatus->sxl = 2;
  mstatus->fs = 1;
  misa->val = 0x14112D;
  misa->mxl = 2;
  Log("Mstatus: %#lx\n", mstatus->val);
}

void init_isa(void) {
    cpu.gpr[0]._64 = 0;
#ifdef __ECPT_COMPATIBLE__
    cpu.pc = PMEM_BASE + RESTORER_START;
#else
    cpu.pc = PMEM_BASE + IMAGE_START;
#endif

  cpu.mode = MODE_M;
  if (!checkpointRestoring) {
#if  !defined(__DIFF_REF_QEMU__) || defined(__SIMPOINT)
    // QEMU seems to initialize mstatus with 0
    mstatus->val = 0x00001800;
#endif
//  Log("Mstatus: 0x%x", mstatus->val);

#define ext(e) (1 << ((e) - 'a'))
    misa->extensions = ext('i') | ext('m') | ext('a') | ext('c') | ext('s') | ext('u');
    misa->extensions |= ext('d') | ext('f');
    misa->mxl = 2; // XLEN = 64

    extern char *cpt_file;
    if (!cpt_file) {
      memcpy(guest_to_host(IMAGE_START), img, sizeof(img));
    }
  }

  init_clint();
  extern void init_sdcard(const char *img);
  extern char *sdcard_img;
  init_sdcard(sdcard_img);
  init_csr();
}


