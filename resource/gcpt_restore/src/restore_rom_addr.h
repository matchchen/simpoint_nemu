#ifndef __RESTORE_ROM_ADDR__
#define __RESTORE_ROM_ADDR__

#define CPT_MAGIC_BUMBER    0xbeef
#define BOOT_CODE           0x00000000
#define BOOT_FLAGS          0x00000f00
#define INT_REG_CPT_ADDR    0x00001000
#define FLOAT_REG_CPT_ADDR  0x00001100
#define PC_CPT_ADDR         0x00001200
#define CSR_CPT_ADDR        0x00001300

#ifndef RESET_VECTOR
    #define RESET_VECTOR        0x000a0000
#endif

#define CLINT_MMIO 0x38000000
#define CLINT_MTIMECMP 0x4000
#define CLINT_MTIME 0xBFF8

#endif //__RESTORE_ROM_ADDR__
