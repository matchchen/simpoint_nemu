#ifndef __RESTORE_ROM_ADDR__
#define __RESTORE_ROM_ADDR__

#define CPT_MAGIC_BUMBER    0xbeef

#define BOOT_CODE           0x0000000
#define BOOT_FLAGS          0x0000f00
#define INT_REG_CPT_ADDR    0x0001000
#define FLOAT_REG_CPT_ADDR  0x0001100
#define PC_CPT_ADDR         0x0001200
#define CSR_CPT_ADDR        0x0001300
#define BOOT2_CODE          0x0010000
#define SIM_DEVICE_ADDR     0x0080000
#define RESET_VECTOR        0x00a0000


#define CLINT_MMIO 0x38000000
#define CLINT_MTIMECMP 0x4000
#define CLINT_MTIME 0xBFF8

//#define RESTORE_C910_RTL 1
//#define RESTORE_A710_RTL 1
#endif //__RESTORE_ROM_ADDR__
