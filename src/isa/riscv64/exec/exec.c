#include <cpu/exec.h>
#include <checkpoint/profiler.h>
#include <checkpoint/simpoint.h>
#include <monitor/monitor.h>
#include "../local-include/decode.h"
#include "../local-include/intr.h"
#include "all-instr.h"

#define decode_empty(s)

static inline void set_width(DecodeExecState *s, int width) {
  if (width != 0) s->width = width;
}

#define IDEXW(idx, id, ex, w) CASE_ENTRY(idx, concat(decode_, id), concat(exec_, ex), w)
#define IDEX(idx, id, ex)     IDEXW(idx, id, ex, 0)
#define EXW(idx, ex, w)       IDEXW(idx, empty, ex, w)
#define EX(idx, ex)           EXW(idx, ex, 0)
#define EMPTY(idx)            //EX(idx, inv)

#define CASE_ENTRY(idx, id, ex, w) case idx: set_width(s, w); id(s); ex(s); break;

static inline make_EHelper(load) {
  switch (s->isa.instr.i.funct3) {
    EXW(0, lds, 1) EXW(1, lds, 2) EXW(2, lds, 4) EXW(3, ld, 8)
    EXW(4, ld, 1)  EXW(5, ld, 2)  EXW(6, ld, 4)
    default: exec_inv(s);
  }
}

static inline make_EHelper(fp_load) {
  switch (s->isa.instr.i.funct3) {
    EXW(2, fp_ld, 4) EXW(3, fp_ld, 8)
    default: exec_inv(s);
  }
}

static inline make_EHelper(store) {
  switch (s->isa.instr.s.funct3) {
    EXW(0, st, 1) EXW(1, st, 2) EXW(2, st, 4) EXW(3, st, 8)
  }
}

static inline make_EHelper(fp_store) {
  switch (s->isa.instr.s.funct3) {
    EXW(2, fp_st, 4) EXW(3, fp_st, 8)
    default: exec_inv(s);
  }
}

static inline make_EHelper(op_fp){
  switch (s->isa.instr.fp.funct5) {
    EX(0, fadd) EX(1, fsub) EX(2, fmul) EX(3, fdiv)
    EX(4, fsgnj) EX(5, fmin_fmax)
    EX(8, fcvt_F_to_F) EX(11, fsqrt) 
    IDEX(20, F_fpr_to_gpr, fcmp) 
    IDEX(24, F_fpr_to_gpr, fcvt_F_to_G) IDEX(26, F_gpr_to_fpr, fcvt_G_to_F) 
    IDEX(28, F_fpr_to_gpr, fmv_F_to_G) IDEX(30, F_gpr_to_fpr, fmv_G_to_F)
    default: exec_inv(s);
  }
}

static inline make_EHelper(op_imm) {
  switch (s->isa.instr.i.funct3) {
    EX(0, addi)     EX(2, slti)     EX(3, sltui)
    EX(4, xori)     EX(6, ori)      EX(7, nemuandi)

    case 1:
      switch (s->isa.instr.i.simm11_0 >> 7) {        
        EX(0, slli)   EX(5, bseti)
        EX(9, bclri) EX(13, binvi)
        case 12:
          switch(s->isa.instr.i.simm11_0 & 0x1f) {
            EX(0, clz)      EX(1, ctz)      EX(2, cpop)
            EX(4, sext_b)   EX(5, sext_h)
            default: exec_inv(s);   
          }
          break;
        default: exec_inv(s);
      }
      break;
    case 5:
      switch (s->isa.instr.i.simm11_0 >> 7) {
        EX(0, srli)   EX(5, orc_b)
        EX(8, srai)   EX(9, bexti)
        EX(12,rori)   EX(13, rev8)
        default: exec_inv(s);
      }
      break;
  }
}

static inline make_EHelper(op_imm32) {
  switch (s->isa.instr.i.funct3) {
    EX(0, addiw)
    // EX(4, addiwu)
    case 1:
      switch (s->isa.instr.i.simm11_0 >> 7) {
        EX(0, slliw)
        EX(1, slliuw)
        case 12:
          switch (s->isa.instr.i.simm11_0 & 0x1f){
            EX(0, clzw)   EX(1, ctzw)   EX(2, cpopw)
            default: exec_inv(s);
          }
          break;
      }
      break;
    case 5:
      switch (s->isa.instr.i.simm11_0 >> 7){
        EX(0, srliw)
        EX(8, sraiw)  
        EX(12,roriw)
        default: exec_inv(s);
      }
      break;
    default: exec_inv(s);
  }
}

static inline make_EHelper(op) {
  uint32_t idx = s->isa.instr.r.funct7;
  // if (idx == 32) idx = 2;
  // assert(idx <= 2);
#define pair(x, y) (((x) << 3) | (y))
  switch (pair(idx, s->isa.instr.r.funct3)) {
    EX(pair(0, 0), add)  EX(pair(0, 1), sll)  EX(pair(0, 2), slt)  EX(pair(0, 3), sltu)
    EX(pair(0, 4), nemuxor)  EX(pair(0, 5), srl)  EX(pair(0, 6), nemuor)   EX(pair(0, 7), nemuand)
    EX(pair(1, 0), mul)  EX(pair(1, 1), mulh) EX(pair(1,2), mulhsu)EX(pair(1, 3), mulhu)
    EX(pair(1, 4), div)  EX(pair(1, 5), divu) EX(pair(1, 6), rem)  EX(pair(1, 7), remu)
    EX(pair(32, 0), sub) EX(pair(32, 5), sra)

    // B-extension
    EX(pair(5, 1), clmul)   EX(pair(5, 2), clmulr)    EX(pair(5, 3), clmulh)    EX(pair(5, 4), min)
    EX(pair(5, 5), minu)    EX(pair(5, 6), max)       EX(pair(5, 7), maxu)

    EX(pair(16, 2), sh1add)
    EX(pair(16, 4), sh2add)
    EX(pair(16, 6), sh3add)
    EX(pair(20, 1), bset)
    // EX(pair(20, 5), orc_b)
    EX(pair(48, 1), rol)
    EX(pair(48, 5), ror)
    EX(pair(52, 1), binv)
    // EX(pair(52, 5), rev8)

    EX(pair(32, 4), xnor)
    EX(pair(32, 6), orn)
    EX(pair(32, 7), andn)

    EX(pair(36, 1), bclr)
    EX(pair(36, 5), bext)

    default: exec_inv(s);
  }
  
#undef pair
}


static inline make_EHelper(op32) {
  uint32_t idx = s->isa.instr.r.funct7;
  // if (idx == 32) idx = 2;
  // assert(idx <= 2);
#define pair(x, y) (((x) << 3) | (y))
  switch (pair(idx, s->isa.instr.r.funct3)) {
    EX(pair(0, 0), addw) EX(pair(0, 1), sllw)
                        EX(pair(0, 5), srlw)
    EX(pair(1, 0), mulw)
    EX(pair(1, 4), divw) EX(pair(1, 5), divuw) EX(pair(1, 6), remw)  EX(pair(1, 7), remuw)
    EX(pair(32, 0), subw) EX(pair(32, 5), sraw)

    // B-extension
    EX(pair(4, 0), adduw)
    EX(pair(4, 4), zext_h)
    EX(pair(16, 2), sh1adduw)
    EX(pair(16, 4), sh2adduw)
    EX(pair(16, 6), sh3adduw)
    EX(pair(48, 1), rolw)
    EX(pair(48, 5), rorw)

    default: exec_inv(s);
  }
#undef pair
}

static inline make_EHelper(branch) {
  switch (s->isa.instr.i.funct3) {
    EX(0, beq)  EX(1, bne)  EMPTY(2)   EMPTY(3)
    EX(4, blt)  EX(5, bge)  EX(6, bltu)EX(7, bgeu)
  }
}
  
static inline make_EHelper(system) {
  switch (s->isa.instr.i.funct3) {
    EX(0, priv)  IDEX(1, csr, csrrw)  IDEX(2, csr, csrrs)  IDEX(3, csr, csrrc)
    EMPTY(4)     IDEX(5, csri, csrrwi)IDEX(6, csri, csrrsi)IDEX(7, csri, csrrci)
  }
}

static inline make_EHelper(atomic) {
  cpu.amo = true;
  uint32_t funct5 = s->isa.instr.r.funct7 >> 2;
  if (funct5 == 2) cpu.amo = false; // lr is not a store
  set_width(s, 1 << s->isa.instr.r.funct3);
  switch (funct5) {
    EX(0x00, amoadd) EX(0x01, amoswap) EX(0x02, lr) EX(0x03, sc)
    EX(0x04, amoxor)
    EX(0x0c, amoand)
    EX(0x08, amoor)
    EX(0x10, amomin)
    EX(0x14, amomax)
    EX(0x18, amominu)
    EX(0x1c, amomaxu)
  }
  cpu.amo = false;
}

static inline make_EHelper(fp) {
  raise_intr(s, EX_II, cpu.pc);
}

// RVC

static inline make_EHelper(misc) {
  uint32_t instr = s->isa.instr.val;
  uint32_t bits12not0 = (BITS(instr, 12, 12) != 0);
  uint32_t bits11_7not0 = (BITS(instr, 11, 7) != 0);
  uint32_t bits6_2not0 = (BITS(instr, 6, 2) != 0);
  uint32_t op = (bits12not0 << 2) | (bits11_7not0 << 1) | bits6_2not0;
  switch (op) {
    IDEX (0b010, C_JR, jalr)
    IDEX (0b011, C_MOV, add)
    IDEX (0b110, C_JALR, jalr)
    IDEX (0b111, C_ADD, add)
    default: exec_inv(s);
  }
}

static inline make_EHelper(lui_addi16sp) {
  uint32_t rd = BITS(s->isa.instr.val, 11, 7);
  assert(rd != 0);
  switch (rd) {
    IDEX (2, C_ADDI16SP, addi)
    default: // and other cases
    IDEX (1, CI_simm_lui, lui)
  }
}

static inline make_EHelper(misc_alu) {
  uint32_t instr = s->isa.instr.val;
  uint32_t op = BITS(instr, 11, 10);
  if (op == 3) {
    uint32_t op2 = (BITS(instr, 12, 12) << 2) | BITS(instr, 6, 5);
    switch (op2) {
      IDEX (0, CS, sub) IDEX (1, CS, nemuxor) IDEX (2, CS, nemuor)  IDEX (3, CS, nemuand)
      IDEX (4, CS, subw)IDEX (5, CS, addw)EMPTY(6)          EMPTY(7)
    }
  } else {
    switch (op) {
      IDEX (0, CB_shift, srli)
      IDEX (1, CB_shift, srai)
      IDEX (2, CB_andi, nemuandi)
    }
  }
}

static inline void exec(DecodeExecState *s) {
  cpu.rvc = 0;
  if ((s->seq_pc & 0xfff) == 0xffe) {
    // instruction may accross page boundary
    uint32_t lo = instr_fetch(&s->seq_pc, 2);
    return_on_mem_ex();
    s->isa.instr.val = lo & 0xffff;
    if (s->isa.instr.r.opcode1_0 != 0x3) {
      // this is an RVC instruction
      cpu.inst_payload = s->isa.instr.val;
      goto rvc;
    }
    // this is a 4-byte instruction, should fetch the MSB part
    // NOTE: The fetch here may cause IPF.
    // If it is the case, we should have mepc = xxxffe and mtval = yyy000.
    // Refer to `mtval` in the privileged manual for more details.
    uint32_t hi = instr_fetch(&s->seq_pc, 2);
    s->isa.instr.val |= ((hi & 0xffff) << 16);
    cpu.inst_payload = s->isa.instr.val;
  } else {
    // in-page instructions, fetch 4 byte and
    // see whether it is an RVC instruction later
    s->isa.instr.val = instr_fetch(&s->seq_pc, 4);
    cpu.inst_payload = s->isa.instr.val;
  }

  return_on_mem_ex();

  if (s->isa.instr.r.opcode1_0 == 0x3) {
    switch (s->isa.instr.r.opcode6_2) {
      IDEX (000, I, load)   IDEX (001, F_I, fp_load)                      EX   (003, fence)
      IDEX (004, I, op_imm) IDEX (005, U, auipc)  IDEX (006, I, op_imm32)
      IDEX (010, S, store)  IDEX (011, F_S, fp_store)                     IDEX (013, R, atomic)
      IDEX (014, R, op)     IDEX (015, U, lui)    IDEX (016, R, op32)
      IDEX (020, F_R, fmadd)
      IDEX (021, F_R, fmsub)
      IDEX (022, F_R, fnmsub)
      IDEX (023, F_R, fnmadd)
      IDEX (024, F_R, op_fp)
      IDEX (030, B, branch) IDEX (031, I, jalr)   EX   (032, nemu_trap)     IDEX (033, J, jal)
      EX   (034, system)
      default: exec_inv(s);
    }
  } else {
    // RVC instructions are only 2-byte
    s->seq_pc -= 2;
rvc: ;
    cpu.rvc = 1;

    //idex(pc, &rvc_table[decinfo.isa.instr.opcode1_0][decinfo.isa.instr.c_funct3]);
    uint32_t rvc_opcode = (s->isa.instr.r.opcode1_0 << 3) | BITS(s->isa.instr.val, 15, 13);
    switch (rvc_opcode) {
      IDEX (000, C_ADDI4SPN, addi) IDEXW(001, C_FLD, fp_ld, 8)   IDEXW(002, C_LW, lds, 4)   IDEXW(003, C_LD, ld, 8)
                                   IDEXW(005, C_FSD, fp_st, 8)   IDEXW(006, C_SW, st, 4)    IDEXW(007, C_SD, st, 8)
      IDEX (010, CI_simm, addi)    IDEX (011, CI_simm, addiw)    IDEX (012, C_LI, addi)     EX   (013, lui_addi16sp)
      EX   (014, misc_alu)         IDEX (015, C_J, jal)          IDEX (016, CB, beq)        IDEX (017, CB, bne)
      IDEX (020, CI_uimm, slli)    IDEXW(021, C_FLDSP, fp_ld, 8) IDEXW(022, C_LWSP, lds, 4) IDEXW(023, C_LDSP, ld, 8)
      EX   (024, misc)             IDEXW(025, C_FSDSP, fp_st, 8) IDEXW(026, C_SWSP, st, 4)  IDEXW(027, C_SDSP, st, 8)
      default: exec_inv(s);
    }
  }
}

vaddr_t isa_exec_once() {
  cpu.need_disambiguate = false;
  cpu.store_addr = 0;
  cpu.store_value = 0;
  cpu.has_mem_exception = 0;

  DecodeExecState s;
  s.is_jmp = 0;
  s.is_control = 0;
  s.seq_pc = cpu.pc;
  s.is_fma = false;
  s.is_load = false;
  s.is_store = false;
  s.dest.type = OP_INVALID;
  s.src1.type = OP_INVALID;
  s.src2.type = OP_INVALID;

  exec(&s);
  if (cpu.mem_exception != MEM_OK) {
    raise_intr(&s, cpu.mem_exception, cpu.pc);
    cpu.mem_exception = MEM_OK;
    cpu.has_mem_exception = 1;
  }
  update_pc(&s);

  if (s.is_store) {
      cpu.store_addr = *s.src1.preg + s.src2.imm;
      cpu.store_value = *s.dest.preg;
      // Log("Store addr = %#lx, value = %#lx\n", cpu.store_addr, cpu.store_value);
  }

  extern bool xpoint_profiling_started;
  if (profiling_state == BetapointProfiling && xpoint_profiling_started) {
    extern uint64_t g_nr_guest_instr;
    profiler.profile(s, g_nr_guest_instr);
  } else if (profiling_state == SimpointProfiling && xpoint_profiling_started) {
    simPointObj.profile(s.seq_pc, s.is_control, true);
  }


#if !defined(DIFF_TEST)
  // enough?
  void query_intr(DecodeExecState *s);
  query_intr(&s);
#endif

  // reset gpr[0]
  reg_l(0) = 0;
  //printf("%x %d\n",s.seq_pc, cpu.gpr[10]._64);
  return s.seq_pc;
}

vaddr_t isa_disambiguate_exec(void *disambiguate_para) {
  DecodeExecState s;
  s.is_jmp = 0;
  s.seq_pc = cpu.pc;
  // need_disambiguate
  cpu.need_disambiguate = true;
  struct DisambiguationState* ds = (struct DisambiguationState*) disambiguate_para;
  memcpy(&cpu.disambiguation_state, ds, sizeof(struct DisambiguationState));
  // printf("isa_disambiguate_exec %ld at pc %lx\n", ds->exceptionNo, cpu.pc);

  exec(&s);
  if (cpu.mem_exception != MEM_OK) {
    raise_intr(&s, cpu.mem_exception, cpu.pc);
    cpu.mem_exception = MEM_OK;
  }
  update_pc(&s);

#if !defined(DIFF_TEST)
  void query_intr(DecodeExecState *s);
  query_intr(&s);
#endif

  // reset gpr[0]
  reg_l(0) = 0;

  cpu.need_disambiguate = false;
  return s.seq_pc;
  // return isa_exec_once();  //TODO
}
