/* Instruction opcode table for or1k.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright 1996-2010 Free Software Foundation, Inc.

This file is part of the GNU Binutils and/or GDB, the GNU debugger.

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

#include "sysdep.h"
#include "ansidecl.h"
#include "bfd.h"
#include "symcat.h"
#include "or1k-desc.h"
#include "or1k-opc.h"
#include "libiberty.h"

/* -- opc.c */
/* -- */
/* The hash functions are recorded here to help keep assembler code out of
   the disassembler and vice versa.  */

static int asm_hash_insn_p        (const CGEN_INSN *);
static unsigned int asm_hash_insn (const char *);
static int dis_hash_insn_p        (const CGEN_INSN *);
static unsigned int dis_hash_insn (const char *, CGEN_INSN_INT);

/* Instruction formats.  */

#define F(f) & or1k_cgen_ifld_table[OR1K_##f]
static const CGEN_IFMT ifmt_empty ATTRIBUTE_UNUSED = {
  0, 0, 0x0, { { 0 } }
};

static const CGEN_IFMT ifmt_l_j ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_DISP26) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_jr ATTRIBUTE_UNUSED = {
  32, 32, 0xffff07ff, { { F (F_OPCODE) }, { F (F_RESV_25_10) }, { F (F_R3) }, { F (F_RESV_10_11) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_trap ATTRIBUTE_UNUSED = {
  32, 32, 0xffff0000, { { F (F_OPCODE) }, { F (F_OP_25_5) }, { F (F_RESV_20_5) }, { F (F_UIMM16) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_rfe ATTRIBUTE_UNUSED = {
  32, 32, 0xffffffff, { { F (F_OPCODE) }, { F (F_RESV_25_26) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_nop_imm ATTRIBUTE_UNUSED = {
  32, 32, 0xffff0000, { { F (F_OPCODE) }, { F (F_OP_25_2) }, { F (F_RESV_23_8) }, { F (F_UIMM16) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_movhi ATTRIBUTE_UNUSED = {
  32, 32, 0xfc1f0000, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_RESV_20_4) }, { F (F_OP_16_1) }, { F (F_SIMM16) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_mfspr ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_UIMM16) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_mtspr ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_R2) }, { F (F_R3) }, { F (F_I16NC) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_lwz ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_SIMM16) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_sw ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R3) }, { F (F_I16NC) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_sll ATTRIBUTE_UNUSED = {
  32, 32, 0xfc0007ff, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_3) }, { F (F_OP_7_2) }, { F (F_RESV_5_2) }, { F (F_OP_3_4) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_slli ATTRIBUTE_UNUSED = {
  32, 32, 0xfc00ffc0, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_RESV_15_8) }, { F (F_OP_7_2) }, { F (F_UIMM6) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_add ATTRIBUTE_UNUSED = {
  32, 32, 0xfc0007ff, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_7) }, { F (F_OP_3_4) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_addi ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_LO16) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_sfgtu ATTRIBUTE_UNUSED = {
  32, 32, 0xffe007ff, { { F (F_OPCODE) }, { F (F_OP_25_5) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_11) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_sfgtui ATTRIBUTE_UNUSED = {
  32, 32, 0xffe00000, { { F (F_OPCODE) }, { F (F_OP_25_5) }, { F (F_R2) }, { F (F_UIMM16) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_sfgtsi ATTRIBUTE_UNUSED = {
  32, 32, 0xffe00000, { { F (F_OPCODE) }, { F (F_OP_25_5) }, { F (F_R2) }, { F (F_SIMM16) }, { 0 } }
};

#undef F

#define A(a) (1 << CGEN_INSN_##a)
#define OPERAND(op) OR1K_OPERAND_##op
#define MNEM CGEN_SYNTAX_MNEMONIC /* syntax value for mnemonic */
#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))

/* The instruction table.  */

static const CGEN_OPCODE or1k_cgen_insn_opcode_table[MAX_INSNS] =
{
  /* Special null first entry.
     A `num' value of zero is thus invalid.
     Also, the special `invalid' insn resides here.  */
  { { 0, 0, 0, 0 }, {{0}}, 0, {0}},
/* l.j ${disp-26} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DISP_26), 0 } },
    & ifmt_l_j, { 0x0 }
  },
/* l.jal ${disp-26} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DISP_26), 0 } },
    & ifmt_l_j, { 0x4000000 }
  },
/* l.jr $rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RB), 0 } },
    & ifmt_l_jr, { 0x44000000 }
  },
/* l.jalr $rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RB), 0 } },
    & ifmt_l_jr, { 0x48000000 }
  },
/* l.bnf ${disp-26} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DISP_26), 0 } },
    & ifmt_l_j, { 0xc000000 }
  },
/* l.bf ${disp-26} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DISP_26), 0 } },
    & ifmt_l_j, { 0x10000000 }
  },
/* l.trap ${uimm-16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (UIMM_16), 0 } },
    & ifmt_l_trap, { 0x21000000 }
  },
/* l.sys ${uimm-16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (UIMM_16), 0 } },
    & ifmt_l_trap, { 0x20000000 }
  },
/* l.rfe */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_l_rfe, { 0x24000000 }
  },
/* l.nop ${uimm-16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (UIMM_16), 0 } },
    & ifmt_l_nop_imm, { 0x15000000 }
  },
/* l.nop */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_l_nop_imm, { 0x15000000 }
  },
/* l.movhi $rD,$hi16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (HI16), 0 } },
    & ifmt_l_movhi, { 0x18000000 }
  },
/* l.mfspr $rD,$rA,${uimm-16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (UIMM_16), 0 } },
    & ifmt_l_mfspr, { 0xb4000000 }
  },
/* l.mtspr $rA,$rB,${ui16nc} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (UI16NC), 0 } },
    & ifmt_l_mtspr, { 0xc0000000 }
  },
/* l.lwz $rD,${simm-16}($rA) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (SIMM_16), '(', OP (RA), ')', 0 } },
    & ifmt_l_lwz, { 0x84000000 }
  },
/* l.lws $rD,${simm-16}($rA) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (SIMM_16), '(', OP (RA), ')', 0 } },
    & ifmt_l_lwz, { 0x88000000 }
  },
/* l.lbz $rD,${simm-16}($rA) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (SIMM_16), '(', OP (RA), ')', 0 } },
    & ifmt_l_lwz, { 0x8c000000 }
  },
/* l.lbs $rD,${simm-16}($rA) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (SIMM_16), '(', OP (RA), ')', 0 } },
    & ifmt_l_lwz, { 0x90000000 }
  },
/* l.lhz $rD,${simm-16}($rA) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (SIMM_16), '(', OP (RA), ')', 0 } },
    & ifmt_l_lwz, { 0x94000000 }
  },
/* l.lhs $rD,${simm-16}($rA) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (SIMM_16), '(', OP (RA), ')', 0 } },
    & ifmt_l_lwz, { 0x98000000 }
  },
/* l.sw ${ui16nc}($rA),$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (UI16NC), '(', OP (RA), ')', ',', OP (RB), 0 } },
    & ifmt_l_sw, { 0xd4000000 }
  },
/* l.sb ${ui16nc}($rA),$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (UI16NC), '(', OP (RA), ')', ',', OP (RB), 0 } },
    & ifmt_l_sw, { 0xd8000000 }
  },
/* l.sh ${ui16nc}($rA),$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (UI16NC), '(', OP (RA), ')', ',', OP (RB), 0 } },
    & ifmt_l_sw, { 0xdc000000 }
  },
/* l.sll $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sll, { 0xe0000008 }
  },
/* l.slli $rD,$rA,${uimm-6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (UIMM_6), 0 } },
    & ifmt_l_slli, { 0xb8000000 }
  },
/* l.srl $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sll, { 0xe0000048 }
  },
/* l.srli $rD,$rA,${uimm-6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (UIMM_6), 0 } },
    & ifmt_l_slli, { 0xb8000040 }
  },
/* l.sra $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sll, { 0xe0000088 }
  },
/* l.srai $rD,$rA,${uimm-6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (UIMM_6), 0 } },
    & ifmt_l_slli, { 0xb8000080 }
  },
/* l.ror $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sll, { 0xe00000c8 }
  },
/* l.rori $rD,$rA,${uimm-6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (UIMM_6), 0 } },
    & ifmt_l_slli, { 0xb80000c0 }
  },
/* l.add $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_add, { 0xe0000000 }
  },
/* l.sub $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_add, { 0xe0000002 }
  },
/* l.and $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_add, { 0xe0000003 }
  },
/* l.or $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_add, { 0xe0000004 }
  },
/* l.xor $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_add, { 0xe0000005 }
  },
/* l.addc $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_add, { 0xe0000001 }
  },
/* l.mul $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_add, { 0xe0000306 }
  },
/* l.mulu $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_add, { 0xe000030b }
  },
/* l.div $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_add, { 0xe0000309 }
  },
/* l.divu $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_add, { 0xe000030a }
  },
/* l.addi $rD,$rA,$lo16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (LO16), 0 } },
    & ifmt_l_addi, { 0x9c000000 }
  },
/* l.andi $rD,$rA,$lo16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (LO16), 0 } },
    & ifmt_l_addi, { 0xa4000000 }
  },
/* l.ori $rD,$rA,$lo16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (LO16), 0 } },
    & ifmt_l_addi, { 0xa8000000 }
  },
/* l.xori $rD,$rA,$lo16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (LO16), 0 } },
    & ifmt_l_addi, { 0xac000000 }
  },
/* l.muli $rD,$rA,$lo16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (LO16), 0 } },
    & ifmt_l_addi, { 0xb0000000 }
  },
/* l.addic $rD,$rA,$lo16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (LO16), 0 } },
    & ifmt_l_addi, { 0xa0000000 }
  },
/* l.sfgtu $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgtu, { 0xe4400000 }
  },
/* l.sfgeu $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgtu, { 0xe4600000 }
  },
/* l.sfltu $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgtu, { 0xe4800000 }
  },
/* l.sfleu $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgtu, { 0xe4a00000 }
  },
/* l.sfgts $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgtu, { 0xe5400000 }
  },
/* l.sfges $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgtu, { 0xe5600000 }
  },
/* l.sflts $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgtu, { 0xe5800000 }
  },
/* l.sfles $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgtu, { 0xe5a00000 }
  },
/* l.sfgtui $rA,${uimm-16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (UIMM_16), 0 } },
    & ifmt_l_sfgtui, { 0xbc400000 }
  },
/* l.sfgeui $rA,${uimm-16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (UIMM_16), 0 } },
    & ifmt_l_sfgtui, { 0xbc600000 }
  },
/* l.sfltui $rA,${uimm-16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (UIMM_16), 0 } },
    & ifmt_l_sfgtui, { 0xbc800000 }
  },
/* l.sfleui $rA,${uimm-16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (UIMM_16), 0 } },
    & ifmt_l_sfgtui, { 0xbca00000 }
  },
/* l.sfgtsi $rA,${simm-16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (SIMM_16), 0 } },
    & ifmt_l_sfgtsi, { 0xbd400000 }
  },
/* l.sfgesi $rA,${simm-16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (SIMM_16), 0 } },
    & ifmt_l_sfgtsi, { 0xbd600000 }
  },
/* l.sfltsi $rA,${simm-16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (SIMM_16), 0 } },
    & ifmt_l_sfgtsi, { 0xbd800000 }
  },
/* l.sflesi $rA,${simm-16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (SIMM_16), 0 } },
    & ifmt_l_sfgtsi, { 0xbda00000 }
  },
/* l.sfeq $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgtu, { 0xe4000000 }
  },
/* l.sfeqi $rA,${simm-16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (SIMM_16), 0 } },
    & ifmt_l_sfgtsi, { 0xbc000000 }
  },
/* l.sfne $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgtu, { 0xe4200000 }
  },
/* l.sfnei $rA,${simm-16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (SIMM_16), 0 } },
    & ifmt_l_sfgtsi, { 0xbc200000 }
  },
};

#undef A
#undef OPERAND
#undef MNEM
#undef OP

/* Formats for ALIAS macro-insns.  */

#define F(f) & or1k_cgen_ifld_table[OR1K_##f]
#undef F

/* Each non-simple macro entry points to an array of expansion possibilities.  */

#define A(a) (1 << CGEN_INSN_##a)
#define OPERAND(op) OR1K_OPERAND_##op
#define MNEM CGEN_SYNTAX_MNEMONIC /* syntax value for mnemonic */
#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))

/* The macro instruction table.  */

static const CGEN_IBASE or1k_cgen_macro_insn_table[] =
{
};

/* The macro instruction opcode table.  */

static const CGEN_OPCODE or1k_cgen_macro_insn_opcode_table[] =
{
};

#undef A
#undef OPERAND
#undef MNEM
#undef OP

#ifndef CGEN_ASM_HASH_P
#define CGEN_ASM_HASH_P(insn) 1
#endif

#ifndef CGEN_DIS_HASH_P
#define CGEN_DIS_HASH_P(insn) 1
#endif

/* Return non-zero if INSN is to be added to the hash table.
   Targets are free to override CGEN_{ASM,DIS}_HASH_P in the .opc file.  */

static int
asm_hash_insn_p (insn)
     const CGEN_INSN *insn ATTRIBUTE_UNUSED;
{
  return CGEN_ASM_HASH_P (insn);
}

static int
dis_hash_insn_p (insn)
     const CGEN_INSN *insn;
{
  /* If building the hash table and the NO-DIS attribute is present,
     ignore.  */
  if (CGEN_INSN_ATTR_VALUE (insn, CGEN_INSN_NO_DIS))
    return 0;
  return CGEN_DIS_HASH_P (insn);
}

#ifndef CGEN_ASM_HASH
#define CGEN_ASM_HASH_SIZE 127
#ifdef CGEN_MNEMONIC_OPERANDS
#define CGEN_ASM_HASH(mnem) (*(unsigned char *) (mnem) % CGEN_ASM_HASH_SIZE)
#else
#define CGEN_ASM_HASH(mnem) (*(unsigned char *) (mnem) % CGEN_ASM_HASH_SIZE) /*FIXME*/
#endif
#endif

/* It doesn't make much sense to provide a default here,
   but while this is under development we do.
   BUFFER is a pointer to the bytes of the insn, target order.
   VALUE is the first base_insn_bitsize bits as an int in host order.  */

#ifndef CGEN_DIS_HASH
#define CGEN_DIS_HASH_SIZE 256
#define CGEN_DIS_HASH(buf, value) (*(unsigned char *) (buf))
#endif

/* The result is the hash value of the insn.
   Targets are free to override CGEN_{ASM,DIS}_HASH in the .opc file.  */

static unsigned int
asm_hash_insn (mnem)
     const char * mnem;
{
  return CGEN_ASM_HASH (mnem);
}

/* BUF is a pointer to the bytes of the insn, target order.
   VALUE is the first base_insn_bitsize bits as an int in host order.  */

static unsigned int
dis_hash_insn (buf, value)
     const char * buf ATTRIBUTE_UNUSED;
     CGEN_INSN_INT value ATTRIBUTE_UNUSED;
{
  return CGEN_DIS_HASH (buf, value);
}

/* Set the recorded length of the insn in the CGEN_FIELDS struct.  */

static void
set_fields_bitsize (CGEN_FIELDS *fields, int size)
{
  CGEN_FIELDS_BITSIZE (fields) = size;
}

/* Function to call before using the operand instance table.
   This plugs the opcode entries and macro instructions into the cpu table.  */

void
or1k_cgen_init_opcode_table (CGEN_CPU_DESC cd)
{
  int i;
  int num_macros = (sizeof (or1k_cgen_macro_insn_table) /
		    sizeof (or1k_cgen_macro_insn_table[0]));
  const CGEN_IBASE *ib = & or1k_cgen_macro_insn_table[0];
  const CGEN_OPCODE *oc = & or1k_cgen_macro_insn_opcode_table[0];
  CGEN_INSN *insns = xmalloc (num_macros * sizeof (CGEN_INSN));

  /* This test has been added to avoid a warning generated
     if memset is called with a third argument of value zero.  */
  if (num_macros >= 1)
    memset (insns, 0, num_macros * sizeof (CGEN_INSN));
  for (i = 0; i < num_macros; ++i)
    {
      insns[i].base = &ib[i];
      insns[i].opcode = &oc[i];
      or1k_cgen_build_insn_regex (& insns[i]);
    }
  cd->macro_insn_table.init_entries = insns;
  cd->macro_insn_table.entry_size = sizeof (CGEN_IBASE);
  cd->macro_insn_table.num_init_entries = num_macros;

  oc = & or1k_cgen_insn_opcode_table[0];
  insns = (CGEN_INSN *) cd->insn_table.init_entries;
  for (i = 0; i < MAX_INSNS; ++i)
    {
      insns[i].opcode = &oc[i];
      or1k_cgen_build_insn_regex (& insns[i]);
    }

  cd->sizeof_fields = sizeof (CGEN_FIELDS);
  cd->set_fields_bitsize = set_fields_bitsize;

  cd->asm_hash_p = asm_hash_insn_p;
  cd->asm_hash = asm_hash_insn;
  cd->asm_hash_size = CGEN_ASM_HASH_SIZE;

  cd->dis_hash_p = dis_hash_insn_p;
  cd->dis_hash = dis_hash_insn;
  cd->dis_hash_size = CGEN_DIS_HASH_SIZE;
}
