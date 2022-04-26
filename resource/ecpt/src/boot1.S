#include "restore_rom_addr.h"
#include "encoding.h"
#include "csr.h"

  .option norvc
  .section ".boot1.code","ax",@progbits
  .globl boot_decide_vector

boot_decide_vector:
  li s0, BOOT_FLAGS  
  ld t1, (s0) #load boot flag
  li t2, CPT_MAGIC_BUMBER
  beq t1, t2,1f
  j RESET_VECTOR

1:
init_early:
#if RESTORE_C910_RTL
  # enable extension
  li   x3, 0x400000
  csrs 0x7c0,x3

  # enable fpu
  li   x3, 0x6000
  csrs mstatus,x3

  # enable vector
  li   x3, 0x800000
  csrs mstatus,x3

  # enable unalign
  li   x3, 0x8000
  csrs 0x7c0,x3

  # mxstatus
  li   x3, 0x638000
  csrs 0x7c0,x3
  
  # msmpr
  csrsi 0x7f3, 0x1  

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
  csrs 0x7c3,x3 
#elif RESTORE_C910_FPGA
#todo
#elif RESTORE_A710_RTL
#todo
#elif RESTORE_A710_FPGA
#todo
#else
#endif
  j BOOT2_CODE

