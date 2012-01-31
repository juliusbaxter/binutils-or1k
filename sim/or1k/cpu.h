/* CPU family header for or1k32bef.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright 1996-2010 Free Software Foundation, Inc.

This file is part of the GNU simulators.

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.

*/

#ifndef CPU_OR1K32BEF_H
#define CPU_OR1K32BEF_H

/* Maximum number of instructions that are fetched at a time.
   This is for LIW type instructions sets (e.g. m32r).  */
#define MAX_LIW_INSNS 1

/* Maximum number of instructions that can be executed in parallel.  */
#define MAX_PARALLEL_INSNS 1

/* The size of an "int" needed to hold an instruction word.
   This is usually 32 bits, but some architectures needs 64 bits.  */
typedef CGEN_INSN_INT CGEN_INSN_WORD;

#include "cgen-engine.h"

/* CPU state information.  */
typedef struct {
  /* Hardware elements.  */
  struct {
  /* program counter */
  USI h_pc;
#define GET_H_PC() CPU (h_pc)
#define SET_H_PC(x) (CPU (h_pc) = (x))
  /* general registers */
  SI h_gr[32];
#define GET_H_GR(a1) CPU (h_gr)[a1]
#define SET_H_GR(a1, x) (CPU (h_gr)[a1] = (x))
  /* special purpose registers */
  SI h_spr[131072];
#define GET_H_SPR(index) or1k32bef_h_spr_get_handler (current_cpu, index)
#define SET_H_SPR(index, x) \
do { \
or1k32bef_h_spr_set_handler (current_cpu, (index), (x));\
;} while (0)
  /* condition bit */
  BI h_cbit;
#define GET_H_CBIT() CPU (h_cbit)
#define SET_H_CBIT(x) (CPU (h_cbit) = (x))
  /* delay insn addr */
  SI h_delay_insn;
#define GET_H_DELAY_INSN() CPU (h_delay_insn)
#define SET_H_DELAY_INSN(x) (CPU (h_delay_insn) = (x))
  } hardware;
#define CPU_CGEN_HW(cpu) (& (cpu)->cpu_data.hardware)
} OR1K32BEF_CPU_DATA;

/* Cover fns for register access.  */
USI or1k32bef_h_pc_get (SIM_CPU *);
void or1k32bef_h_pc_set (SIM_CPU *, USI);
SI or1k32bef_h_gr_get (SIM_CPU *, UINT);
void or1k32bef_h_gr_set (SIM_CPU *, UINT, SI);
SI or1k32bef_h_spr_get (SIM_CPU *, UINT);
void or1k32bef_h_spr_set (SIM_CPU *, UINT, SI);
BI or1k32bef_h_cbit_get (SIM_CPU *);
void or1k32bef_h_cbit_set (SIM_CPU *, BI);
SI or1k32bef_h_delay_insn_get (SIM_CPU *);
void or1k32bef_h_delay_insn_set (SIM_CPU *, SI);

/* These must be hand-written.  */
extern CPUREG_FETCH_FN or1k32bef_fetch_register;
extern CPUREG_STORE_FN or1k32bef_store_register;

typedef struct {
  int empty;
} MODEL_OR1200_DATA;

/* Instruction argument buffer.  */

union sem_fields {
  struct { /* no operands */
    int empty;
  } sfmt_empty;
  struct { /*  */
    IADDR i_disp_26;
    unsigned char out_h_gr_SI_9;
  } sfmt_l_jal;
  struct { /*  */
    UINT f_r3;
    unsigned char in_rB;
    unsigned char out_h_gr_SI_9;
  } sfmt_l_jalr;
  struct { /*  */
    INT f_lo16;
    UINT f_r1;
    UINT f_r2;
    unsigned char in_rA;
    unsigned char out_rD;
  } sfmt_l_addi;
  struct { /*  */
    UINT f_r1;
    UINT f_r2;
    UINT f_uimm6;
    unsigned char in_rA;
    unsigned char out_rD;
  } sfmt_l_slli;
  struct { /*  */
    INT f_simm16;
    UINT f_r1;
    UINT f_r2;
    unsigned char in_rA;
    unsigned char out_rD;
  } sfmt_l_lwz;
  struct { /*  */
    UINT f_r2;
    UINT f_r3;
    HI f_i16nc;
    unsigned char in_rA;
    unsigned char in_rB;
  } sfmt_l_mtspr;
  struct { /*  */
    UINT f_r1;
    UINT f_r2;
    UINT f_uimm16;
    unsigned char in_rA;
    unsigned char out_rD;
  } sfmt_l_mfspr;
  struct { /*  */
    UINT f_r1;
    UINT f_r2;
    UINT f_r3;
    unsigned char in_rA;
    unsigned char in_rB;
    unsigned char out_rD;
  } sfmt_l_sll;
#if WITH_SCACHE_PBB
  /* Writeback handler.  */
  struct {
    /* Pointer to argbuf entry for insn whose results need writing back.  */
    const struct argbuf *abuf;
  } write;
  /* x-before handler */
  struct {
    /*const SCACHE *insns[MAX_PARALLEL_INSNS];*/
    int first_p;
  } before;
  /* x-after handler */
  struct {
    int empty;
  } after;
  /* This entry is used to terminate each pbb.  */
  struct {
    /* Number of insns in pbb.  */
    int insn_count;
    /* Next pbb to execute.  */
    SCACHE *next;
    SCACHE *branch_target;
  } chain;
#endif
};

/* The ARGBUF struct.  */
struct argbuf {
  /* These are the baseclass definitions.  */
  IADDR addr;
  const IDESC *idesc;
  char trace_p;
  char profile_p;
  /* ??? Temporary hack for skip insns.  */
  char skip_count;
  char unused;
  /* cpu specific data follows */
  union sem semantic;
  int written;
  union sem_fields fields;
};

/* A cached insn.

   ??? SCACHE used to contain more than just argbuf.  We could delete the
   type entirely and always just use ARGBUF, but for future concerns and as
   a level of abstraction it is left in.  */

struct scache {
  struct argbuf argbuf;
};

/* Macros to simplify extraction, reading and semantic code.
   These define and assign the local vars that contain the insn's fields.  */

#define EXTRACT_IFMT_EMPTY_VARS \
  unsigned int length;
#define EXTRACT_IFMT_EMPTY_CODE \
  length = 0; \

#define EXTRACT_IFMT_L_J_VARS \
  UINT f_opcode; \
  SI f_disp26; \
  unsigned int length;
#define EXTRACT_IFMT_L_J_CODE \
  length = 4; \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 31, 6); \
  f_disp26 = ((((EXTRACT_LSB0_SINT (insn, 32, 25, 26)) << (2))) + (pc)); \

#define EXTRACT_IFMT_L_JR_VARS \
  UINT f_opcode; \
  UINT f_resv_25_10; \
  UINT f_r3; \
  UINT f_resv_10_11; \
  unsigned int length;
#define EXTRACT_IFMT_L_JR_CODE \
  length = 4; \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 31, 6); \
  f_resv_25_10 = EXTRACT_LSB0_UINT (insn, 32, 25, 10); \
  f_r3 = EXTRACT_LSB0_UINT (insn, 32, 15, 5); \
  f_resv_10_11 = EXTRACT_LSB0_UINT (insn, 32, 10, 11); \

#define EXTRACT_IFMT_L_TRAP_VARS \
  UINT f_opcode; \
  UINT f_op_25_5; \
  UINT f_resv_20_5; \
  UINT f_uimm16; \
  unsigned int length;
#define EXTRACT_IFMT_L_TRAP_CODE \
  length = 4; \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 31, 6); \
  f_op_25_5 = EXTRACT_LSB0_UINT (insn, 32, 25, 5); \
  f_resv_20_5 = EXTRACT_LSB0_UINT (insn, 32, 20, 5); \
  f_uimm16 = EXTRACT_LSB0_UINT (insn, 32, 15, 16); \

#define EXTRACT_IFMT_L_RFE_VARS \
  UINT f_opcode; \
  UINT f_resv_25_26; \
  unsigned int length;
#define EXTRACT_IFMT_L_RFE_CODE \
  length = 4; \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 31, 6); \
  f_resv_25_26 = EXTRACT_LSB0_UINT (insn, 32, 25, 26); \

#define EXTRACT_IFMT_L_NOP_IMM_VARS \
  UINT f_opcode; \
  UINT f_op_25_2; \
  UINT f_resv_23_8; \
  UINT f_uimm16; \
  unsigned int length;
#define EXTRACT_IFMT_L_NOP_IMM_CODE \
  length = 4; \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 31, 6); \
  f_op_25_2 = EXTRACT_LSB0_UINT (insn, 32, 25, 2); \
  f_resv_23_8 = EXTRACT_LSB0_UINT (insn, 32, 23, 8); \
  f_uimm16 = EXTRACT_LSB0_UINT (insn, 32, 15, 16); \

#define EXTRACT_IFMT_L_MOVHI_VARS \
  UINT f_opcode; \
  UINT f_r1; \
  UINT f_resv_20_4; \
  UINT f_op_16_1; \
  INT f_simm16; \
  unsigned int length;
#define EXTRACT_IFMT_L_MOVHI_CODE \
  length = 4; \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 31, 6); \
  f_r1 = EXTRACT_LSB0_UINT (insn, 32, 25, 5); \
  f_resv_20_4 = EXTRACT_LSB0_UINT (insn, 32, 20, 4); \
  f_op_16_1 = EXTRACT_LSB0_UINT (insn, 32, 16, 1); \
  f_simm16 = EXTRACT_LSB0_SINT (insn, 32, 15, 16); \

#define EXTRACT_IFMT_L_MFSPR_VARS \
  UINT f_opcode; \
  UINT f_r1; \
  UINT f_r2; \
  UINT f_uimm16; \
  unsigned int length;
#define EXTRACT_IFMT_L_MFSPR_CODE \
  length = 4; \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 31, 6); \
  f_r1 = EXTRACT_LSB0_UINT (insn, 32, 25, 5); \
  f_r2 = EXTRACT_LSB0_UINT (insn, 32, 20, 5); \
  f_uimm16 = EXTRACT_LSB0_UINT (insn, 32, 15, 16); \

#define EXTRACT_IFMT_L_MTSPR_VARS \
  UINT f_opcode; \
  UINT f_r2; \
  UINT f_r3; \
  UINT f_i16_1; \
  UINT f_i16_2; \
  HI f_i16nc; \
  unsigned int length;
#define EXTRACT_IFMT_L_MTSPR_CODE \
  length = 4; \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 31, 6); \
  f_r2 = EXTRACT_LSB0_UINT (insn, 32, 20, 5); \
  f_r3 = EXTRACT_LSB0_UINT (insn, 32, 15, 5); \
  f_i16_1 = EXTRACT_LSB0_UINT (insn, 32, 10, 11); \
  f_i16_2 = EXTRACT_LSB0_UINT (insn, 32, 25, 5); \
{\
  f_i16nc = or1k_sign_extend_16bit (((((f_i16_2) << (11))) | (f_i16_1)));\
}\

#define EXTRACT_IFMT_L_LWZ_VARS \
  UINT f_opcode; \
  UINT f_r1; \
  UINT f_r2; \
  INT f_simm16; \
  unsigned int length;
#define EXTRACT_IFMT_L_LWZ_CODE \
  length = 4; \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 31, 6); \
  f_r1 = EXTRACT_LSB0_UINT (insn, 32, 25, 5); \
  f_r2 = EXTRACT_LSB0_UINT (insn, 32, 20, 5); \
  f_simm16 = EXTRACT_LSB0_SINT (insn, 32, 15, 16); \

#define EXTRACT_IFMT_L_SW_VARS \
  UINT f_opcode; \
  UINT f_r1; \
  UINT f_r3; \
  UINT f_i16_1; \
  UINT f_i16_2; \
  HI f_i16nc; \
  unsigned int length;
#define EXTRACT_IFMT_L_SW_CODE \
  length = 4; \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 31, 6); \
  f_r1 = EXTRACT_LSB0_UINT (insn, 32, 25, 5); \
  f_r3 = EXTRACT_LSB0_UINT (insn, 32, 15, 5); \
  f_i16_1 = EXTRACT_LSB0_UINT (insn, 32, 10, 11); \
  f_i16_2 = EXTRACT_LSB0_UINT (insn, 32, 25, 5); \
{\
  f_i16nc = or1k_sign_extend_16bit (((((f_i16_2) << (11))) | (f_i16_1)));\
}\

#define EXTRACT_IFMT_L_SLL_VARS \
  UINT f_opcode; \
  UINT f_r1; \
  UINT f_r2; \
  UINT f_r3; \
  UINT f_resv_10_3; \
  UINT f_op_7_2; \
  UINT f_resv_5_2; \
  UINT f_op_3_4; \
  unsigned int length;
#define EXTRACT_IFMT_L_SLL_CODE \
  length = 4; \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 31, 6); \
  f_r1 = EXTRACT_LSB0_UINT (insn, 32, 25, 5); \
  f_r2 = EXTRACT_LSB0_UINT (insn, 32, 20, 5); \
  f_r3 = EXTRACT_LSB0_UINT (insn, 32, 15, 5); \
  f_resv_10_3 = EXTRACT_LSB0_UINT (insn, 32, 10, 3); \
  f_op_7_2 = EXTRACT_LSB0_UINT (insn, 32, 7, 2); \
  f_resv_5_2 = EXTRACT_LSB0_UINT (insn, 32, 5, 2); \
  f_op_3_4 = EXTRACT_LSB0_UINT (insn, 32, 3, 4); \

#define EXTRACT_IFMT_L_SLLI_VARS \
  UINT f_opcode; \
  UINT f_r1; \
  UINT f_r2; \
  UINT f_resv_15_8; \
  UINT f_op_7_2; \
  UINT f_uimm6; \
  unsigned int length;
#define EXTRACT_IFMT_L_SLLI_CODE \
  length = 4; \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 31, 6); \
  f_r1 = EXTRACT_LSB0_UINT (insn, 32, 25, 5); \
  f_r2 = EXTRACT_LSB0_UINT (insn, 32, 20, 5); \
  f_resv_15_8 = EXTRACT_LSB0_UINT (insn, 32, 15, 8); \
  f_op_7_2 = EXTRACT_LSB0_UINT (insn, 32, 7, 2); \
  f_uimm6 = EXTRACT_LSB0_UINT (insn, 32, 5, 6); \

#define EXTRACT_IFMT_L_ADD_VARS \
  UINT f_opcode; \
  UINT f_r1; \
  UINT f_r2; \
  UINT f_r3; \
  UINT f_resv_10_7; \
  UINT f_op_3_4; \
  unsigned int length;
#define EXTRACT_IFMT_L_ADD_CODE \
  length = 4; \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 31, 6); \
  f_r1 = EXTRACT_LSB0_UINT (insn, 32, 25, 5); \
  f_r2 = EXTRACT_LSB0_UINT (insn, 32, 20, 5); \
  f_r3 = EXTRACT_LSB0_UINT (insn, 32, 15, 5); \
  f_resv_10_7 = EXTRACT_LSB0_UINT (insn, 32, 10, 7); \
  f_op_3_4 = EXTRACT_LSB0_UINT (insn, 32, 3, 4); \

#define EXTRACT_IFMT_L_ADDI_VARS \
  UINT f_opcode; \
  UINT f_r1; \
  UINT f_r2; \
  INT f_lo16; \
  unsigned int length;
#define EXTRACT_IFMT_L_ADDI_CODE \
  length = 4; \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 31, 6); \
  f_r1 = EXTRACT_LSB0_UINT (insn, 32, 25, 5); \
  f_r2 = EXTRACT_LSB0_UINT (insn, 32, 20, 5); \
  f_lo16 = EXTRACT_LSB0_SINT (insn, 32, 15, 16); \

#define EXTRACT_IFMT_L_SFGTU_VARS \
  UINT f_opcode; \
  UINT f_op_25_5; \
  UINT f_r2; \
  UINT f_r3; \
  UINT f_resv_10_11; \
  unsigned int length;
#define EXTRACT_IFMT_L_SFGTU_CODE \
  length = 4; \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 31, 6); \
  f_op_25_5 = EXTRACT_LSB0_UINT (insn, 32, 25, 5); \
  f_r2 = EXTRACT_LSB0_UINT (insn, 32, 20, 5); \
  f_r3 = EXTRACT_LSB0_UINT (insn, 32, 15, 5); \
  f_resv_10_11 = EXTRACT_LSB0_UINT (insn, 32, 10, 11); \

#define EXTRACT_IFMT_L_SFGTUI_VARS \
  UINT f_opcode; \
  UINT f_op_25_5; \
  UINT f_r2; \
  INT f_lo16; \
  unsigned int length;
#define EXTRACT_IFMT_L_SFGTUI_CODE \
  length = 4; \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 31, 6); \
  f_op_25_5 = EXTRACT_LSB0_UINT (insn, 32, 25, 5); \
  f_r2 = EXTRACT_LSB0_UINT (insn, 32, 20, 5); \
  f_lo16 = EXTRACT_LSB0_SINT (insn, 32, 15, 16); \

#define EXTRACT_IFMT_L_SFGTSI_VARS \
  UINT f_opcode; \
  UINT f_op_25_5; \
  UINT f_r2; \
  INT f_simm16; \
  unsigned int length;
#define EXTRACT_IFMT_L_SFGTSI_CODE \
  length = 4; \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 31, 6); \
  f_op_25_5 = EXTRACT_LSB0_UINT (insn, 32, 25, 5); \
  f_r2 = EXTRACT_LSB0_UINT (insn, 32, 20, 5); \
  f_simm16 = EXTRACT_LSB0_SINT (insn, 32, 15, 16); \

/* Collection of various things for the trace handler to use.  */

typedef struct trace_record {
  IADDR pc;
  /* FIXME:wip */
} TRACE_RECORD;

#endif /* CPU_OR1K32BEF_H */
