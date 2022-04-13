# simpoint_nemu
base on nemu cpt-bk branch, for the simpoint purpose.

# Main changes
## v0.1
1) Modify makefile according to my environment
2) enable LOG macro
3) memory base addr and size(base:0x0 size:1MB)
4) gcpt memory layout(base on 0x0)
5) allow take checkpoint in m-mode
6) resolve cannot producing bbv file problem
7) resolve fscsr problem when resume checkpoint
## v0.2
1) remove middle files 
2) remove x86 and mips arch directory
3) fix a take checkpoint problem
4) support access mtime csr for compatible with other simulator or FPGA
