#ifndef __CPU_DECODE_H__
#define __CPU_DECODE_H__

#include <isa.h>

#define OP_STR_SIZE 40
enum { OP_TYPE_REG, OP_TYPE_MEM, OP_TYPE_IMM, OP_INVALID };

typedef struct {
  uint32_t type;
  int width;
  union {
    uint32_t reg;
    word_t imm;
    sword_t simm;
  };
  rtlreg_t *preg;
  rtlreg_t val;
  nemu_bool is_fp;
  char str[OP_STR_SIZE];
} Operand;

typedef struct {
  uint32_t opcode;
  vaddr_t seq_pc;  // sequential pc
  uint32_t is_jmp;
  uint32_t is_control;
  vaddr_t jmp_pc;
  Operand src1, dest, src2;
  nemu_bool is_fma;
  nemu_bool is_load, is_store;
  int width;
  rtlreg_t tmp_reg[4];
  ISADecodeInfo isa;
} DecodeExecState;

#define make_DHelper(name) void concat(decode_, name) (DecodeExecState *s)

#ifdef DEBUG
#define print_Dop(...) snprintf(__VA_ARGS__)
#else
#define print_Dop(...)
#endif

#endif
