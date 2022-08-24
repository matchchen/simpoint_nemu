2022/08/10
1: modified tracing nemu for ecpt,it has been successfully tested on baremetal;

2022/08/24
1: add a new memory mapping for sim_rtl;
2: modify ecpt Makefile for sim_rtl;


### Run baremetal app

1: profile workload;

./build/riscv64-nemu-interpreter -b ./hello_world.bin -D spec_cpt/ -w workloadName 
-C run_spec --simpoint-profile --cpt-interval 1000

2: simpoint cluster

./resource/simpoint/simpoint_repo/bin/simpoint -loadFVFile ./spec_cpt/run_spec/workloadName/simpoint_bbv.gz 
-saveSimpoints ./spec_cpt/cluster/workloadName/simpoints0 -saveSimpointWeights
 ./spec_cpt/cluster/workloadName/weights0 -inputVectorsGzipped -maxK 30 -numInitSeeds 5 
-iters 100 -seedkm 123456 -seedproj 654321

3: get checkpoint

./build/riscv64-nemu-interpreter  ./hello_world.bin -b -D ./spec_cpt -w workloadName 
-C take_cpt -S ./spec_cpt/cluster/  --cpt-interval=1000 -r ./resource/ecpt/build/ecpt.bin

