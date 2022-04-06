# simpoint_nemu
base on nemu cpt-bk branch, for the simpoint purpose.

# Main changes
1) Modify makefile according to my environment
2) enable LOG macro
3) memory base addr and size(base:0x0 size:1MB)
4) gcpt memory layout(base on 0x0)
5) allow take checkpoint in m-mode
6) resolve cannot producing bbv file problem
7) resolve fscsr problem when resume checkpoint
