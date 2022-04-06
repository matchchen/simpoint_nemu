//
// Created by zyy on 2020/11/21.
//

#include "checkpoint/path_manager.h"

#include <monitor/monitor.h>
#include <iostream>
#include <experimental/filesystem>

using namespace std;

void PathManager::init() {
  assert(stats_base_dir);
  statsBaseDir = stats_base_dir;

  assert(config_name);
  configName = config_name;

  assert(workload_name);
  workloadName = workload_name;

  cptID = -1;

  if (cpt_id != -1) {
    cptID = cpt_id;
  }

  if (profiling_state == SimpointCheckpointing || checkpointTaking) {
    cptID = 0;
  }

  Log("Cpt id: %i", cptID);
  workloadPath = statsBaseDir + "/" + configName + "/" + workloadName + "/";
  flat_workloadPath = statsBaseDir + "/" + configName + "/";

  if (profiling_state == SimpointCheckpointing) {
    assert(simpoints_dir);
    simpointPath = fs::path(string(simpoints_dir) + "/" + workloadName +"/");
  }

  setOutputDir();
}

void PathManager::setOutputDir() {
  #ifdef FLAT_CPTPATH
  std::string output_path = flat_workloadPath;
  #else
  std::string output_path = workloadPath;
  if (cptID != -1) {
    output_path += to_string(cptID) + "/";
  }
  #endif

  outputPath = fs::path(output_path);

  if (!fs::exists(outputPath)) {
    fs::create_directories(outputPath);
    Log("Created %s\n", output_path.c_str());
  }
}

void PathManager::incCptID() {
  cptID++;
}

std::string PathManager::getOutputPath() const {
  assert(fs::exists(outputPath));
  return outputPath.string();
}

std::string PathManager::getWorkloadName() const {
  return workloadName;
}


std::string PathManager::getSimpointPath() const {
  // cerr << simpointPath.string() << endl;
  // std::fflush(stderr);
  assert(fs::exists(simpointPath));
  return simpointPath.string();
}

PathManager pathManager;

void init_path_manger()
{
  pathManager.init();
}
