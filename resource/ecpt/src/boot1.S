#include "restore_rom_addr.h"
#include "encoding.h"
#include "csr.h"

 // .option norvc
  .section ".boot1.code","ax",@progbits
  .globl init_early

init_early:
#if RESTORE_C910_RTL //refer to openc910 smart_run
# enable extension
  li   x3, 0x400000
  csrs 0x7c0,x3 //mxstatus

# enable fpu
  li   x3, 0x6000
  csrs mstatus,x3

# enable vector
  li   x3, 0x800000
  csrs mstatus,x3

# enable unalign
  li   x3, 0x8000
  csrs 0x7c0,x3 //mxstatus

# mxstatus
  li   x3, 0x638000
  csrs 0x7c0,x3 //mxstatus

# msmpr
  csrsi 0x7f3, 0x1 //msmpr

# PART 1: initialize all registers
  li  x1, 0
  li  x2, 0
  li  x3, 0
  li  x4, 0
  li  x5, 0
  li  x6, 0
  li  x7, 0
  li  x8, 0
  li  x9, 0
  li  x10,0
  li  x11,0
  li  x12,0
  li  x13,0
  li  x14,0
  li  x15,0
  li  x16,0
  li  x17,0
  li  x18,0
  li  x19,0
  li  x20,0
  li  x21,0
  li  x22,0
  li  x23,0
  li  x24,0
  li  x25,0
  li  x26,0
  li  x27,0
  li  x28,0
  li  x29,0
  li  x30,0
  li  x31,0

## PART 2: initialize stack pointer & ppn
  csrr x3,mhartid
  li x4,1

bgtz x3,slave_harts 

  .global cpu_0_sp
cpu_0_sp:
  la x2, stack0
  
# PART 3:initialize mtvec value
  la    x3,__trap_handler
  csrw  mtvec,x3

  # enable mie
  li   x3, 0x8
  csrs mstatus,x3

  # invalid all memory for IBP,BTB,BHT,DCACHE,ICACHE
  li x3, 0x70013
  csrs 0x7c2,x3  #mcor

  # enable ICACHE,DCACHE,BHT,BTB,IBP,RAS,WA
  # li x3, 0x10f7
  # csrs 0x7c1,x3  #mhcr
  li x3, 0x11ff
  csrs 0x7c1,x3  #mhcr

  .global after_l2en
after_l2en:
  # enable write allocate
  # li x3, 0x4
  # csrs 0x7c1,x3  #mhcr
  li x3, 0x11ff
  csrs 0x7c1,x3  #mhcr

  # enable lbuf,way_pred,data_cache_prefetch, amr
  # li x3, 0x7e30c
  # csrs 0x7c5,x3   #mhint
  li x3, 0x6e30c
  csrs 0x7c5,x3   #mhint

  # mccr2
  li x3, 0xe0000009
  csrs 0x7c3,x3 //mccr2

#elif RESTORE_c910_FPGA
  # enable FPU and accelerator if present
  li t0, MSTATUS_FS | MSTATUS_XS
  csrs mstatus, t0
#todo
#else
#endif
  j BOOT2_CODE

slave_harts:
  wfi
  j slave_harts

.align 2
__trap_handler:
  j __trap_handler


