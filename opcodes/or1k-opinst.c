/* Semantic operand instances for or1k.

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

/* Operand references.  */

#define OP_ENT(op) OR1K_OPERAND_##op
#define INPUT CGEN_OPINST_INPUT
#define OUTPUT CGEN_OPINST_OUTPUT
#define END CGEN_OPINST_END
#define COND_REF CGEN_OPINST_COND_REF

static const CGEN_OPINST sfmt_empty_ops[] ATTRIBUTE_UNUSED = {
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_j_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "disp_26", HW_H_IADDR, CGEN_MODE_USI, OP_ENT (DISP_26), 0, 0 },
  { OUTPUT, "pc", HW_H_PC, CGEN_MODE_USI, 0, 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_jal_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "disp_26", HW_H_IADDR, CGEN_MODE_USI, OP_ENT (DISP_26), 0, 0 },
  { INPUT, "h_delay_insn_SI", HW_H_DELAY_INSN, CGEN_MODE_SI, 0, 0, 0 },
  { OUTPUT, "h_gr_SI_9", HW_H_GR, CGEN_MODE_SI, 0, 9, 0 },
  { OUTPUT, "pc", HW_H_PC, CGEN_MODE_USI, 0, 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_jr_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "rB", HW_H_GR, CGEN_MODE_SI, OP_ENT (RB), 0, 0 },
  { OUTPUT, "pc", HW_H_PC, CGEN_MODE_USI, 0, 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_jalr_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "h_delay_insn_SI", HW_H_DELAY_INSN, CGEN_MODE_SI, 0, 0, 0 },
  { INPUT, "rB", HW_H_GR, CGEN_MODE_SI, OP_ENT (RB), 0, 0 },
  { OUTPUT, "h_gr_SI_9", HW_H_GR, CGEN_MODE_SI, 0, 9, 0 },
  { OUTPUT, "pc", HW_H_PC, CGEN_MODE_USI, 0, 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_bnf_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "cbit", HW_H_CBIT, CGEN_MODE_BI, 0, 0, 0 },
  { INPUT, "disp_26", HW_H_IADDR, CGEN_MODE_USI, OP_ENT (DISP_26), 0, COND_REF },
  { OUTPUT, "pc", HW_H_PC, CGEN_MODE_USI, 0, 0, COND_REF },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_trap_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "pc", HW_H_PC, CGEN_MODE_USI, 0, 0, 0 },
  { OUTPUT, "pc", HW_H_PC, CGEN_MODE_USI, 0, 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_rfe_ops[] ATTRIBUTE_UNUSED = {
  { OUTPUT, "pc", HW_H_PC, CGEN_MODE_USI, 0, 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_nop_ops[] ATTRIBUTE_UNUSED = {
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_movhi_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "hi16", HW_H_HI16, CGEN_MODE_INT, OP_ENT (HI16), 0, 0 },
  { OUTPUT, "rD", HW_H_GR, CGEN_MODE_SI, OP_ENT (RD), 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_mfspr_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "rA", HW_H_GR, CGEN_MODE_SI, OP_ENT (RA), 0, 0 },
  { INPUT, "uimm_16", HW_H_UINT, CGEN_MODE_UINT, OP_ENT (UIMM_16), 0, 0 },
  { OUTPUT, "rD", HW_H_GR, CGEN_MODE_SI, OP_ENT (RD), 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_mtspr_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "rA", HW_H_GR, CGEN_MODE_SI, OP_ENT (RA), 0, 0 },
  { INPUT, "rB", HW_H_GR, CGEN_MODE_SI, OP_ENT (RB), 0, 0 },
  { INPUT, "ui16nc", HW_H_LO16, CGEN_MODE_INT, OP_ENT (UI16NC), 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_lwz_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "h_memory_SI_add__SI_rA_simm_16", HW_H_MEMORY, CGEN_MODE_SI, 0, 0, 0 },
  { INPUT, "rA", HW_H_GR, CGEN_MODE_SI, OP_ENT (RA), 0, 0 },
  { INPUT, "simm_16", HW_H_SINT, CGEN_MODE_INT, OP_ENT (SIMM_16), 0, 0 },
  { OUTPUT, "rD", HW_H_GR, CGEN_MODE_SI, OP_ENT (RD), 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_lbz_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "h_memory_QI_add__SI_rA_simm_16", HW_H_MEMORY, CGEN_MODE_QI, 0, 0, 0 },
  { INPUT, "rA", HW_H_GR, CGEN_MODE_SI, OP_ENT (RA), 0, 0 },
  { INPUT, "simm_16", HW_H_SINT, CGEN_MODE_INT, OP_ENT (SIMM_16), 0, 0 },
  { OUTPUT, "rD", HW_H_GR, CGEN_MODE_SI, OP_ENT (RD), 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_lhz_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "h_memory_HI_add__SI_rA_simm_16", HW_H_MEMORY, CGEN_MODE_HI, 0, 0, 0 },
  { INPUT, "rA", HW_H_GR, CGEN_MODE_SI, OP_ENT (RA), 0, 0 },
  { INPUT, "simm_16", HW_H_SINT, CGEN_MODE_INT, OP_ENT (SIMM_16), 0, 0 },
  { OUTPUT, "rD", HW_H_GR, CGEN_MODE_SI, OP_ENT (RD), 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_sw_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "rA", HW_H_GR, CGEN_MODE_SI, OP_ENT (RA), 0, 0 },
  { INPUT, "rB", HW_H_GR, CGEN_MODE_SI, OP_ENT (RB), 0, 0 },
  { INPUT, "ui16nc", HW_H_LO16, CGEN_MODE_INT, OP_ENT (UI16NC), 0, 0 },
  { OUTPUT, "h_memory_SI_add__SI_rA_ui16nc", HW_H_MEMORY, CGEN_MODE_SI, 0, 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_sb_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "rA", HW_H_GR, CGEN_MODE_SI, OP_ENT (RA), 0, 0 },
  { INPUT, "rB", HW_H_GR, CGEN_MODE_SI, OP_ENT (RB), 0, 0 },
  { INPUT, "ui16nc", HW_H_LO16, CGEN_MODE_INT, OP_ENT (UI16NC), 0, 0 },
  { OUTPUT, "h_memory_QI_add__SI_rA_ui16nc", HW_H_MEMORY, CGEN_MODE_QI, 0, 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_sh_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "rA", HW_H_GR, CGEN_MODE_SI, OP_ENT (RA), 0, 0 },
  { INPUT, "rB", HW_H_GR, CGEN_MODE_SI, OP_ENT (RB), 0, 0 },
  { INPUT, "ui16nc", HW_H_LO16, CGEN_MODE_INT, OP_ENT (UI16NC), 0, 0 },
  { OUTPUT, "h_memory_HI_add__SI_rA_ui16nc", HW_H_MEMORY, CGEN_MODE_HI, 0, 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_sll_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "rA", HW_H_GR, CGEN_MODE_SI, OP_ENT (RA), 0, 0 },
  { INPUT, "rB", HW_H_GR, CGEN_MODE_SI, OP_ENT (RB), 0, 0 },
  { OUTPUT, "rD", HW_H_GR, CGEN_MODE_SI, OP_ENT (RD), 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_slli_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "rA", HW_H_GR, CGEN_MODE_SI, OP_ENT (RA), 0, 0 },
  { INPUT, "uimm_6", HW_H_UINT, CGEN_MODE_UINT, OP_ENT (UIMM_6), 0, 0 },
  { OUTPUT, "rD", HW_H_GR, CGEN_MODE_SI, OP_ENT (RD), 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_add_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "rA", HW_H_GR, CGEN_MODE_SI, OP_ENT (RA), 0, 0 },
  { INPUT, "rB", HW_H_GR, CGEN_MODE_SI, OP_ENT (RB), 0, 0 },
  { OUTPUT, "rD", HW_H_GR, CGEN_MODE_SI, OP_ENT (RD), 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_addi_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "lo16", HW_H_LO16, CGEN_MODE_INT, OP_ENT (LO16), 0, 0 },
  { INPUT, "rA", HW_H_GR, CGEN_MODE_SI, OP_ENT (RA), 0, 0 },
  { OUTPUT, "rD", HW_H_GR, CGEN_MODE_SI, OP_ENT (RD), 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_sfgtu_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "rA", HW_H_GR, CGEN_MODE_SI, OP_ENT (RA), 0, 0 },
  { INPUT, "rB", HW_H_GR, CGEN_MODE_SI, OP_ENT (RB), 0, 0 },
  { OUTPUT, "cbit", HW_H_CBIT, CGEN_MODE_BI, 0, 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_sfgtui_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "rA", HW_H_GR, CGEN_MODE_SI, OP_ENT (RA), 0, 0 },
  { INPUT, "uimm_16", HW_H_UINT, CGEN_MODE_UINT, OP_ENT (UIMM_16), 0, 0 },
  { OUTPUT, "cbit", HW_H_CBIT, CGEN_MODE_BI, 0, 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

static const CGEN_OPINST sfmt_l_sfgtsi_ops[] ATTRIBUTE_UNUSED = {
  { INPUT, "rA", HW_H_GR, CGEN_MODE_SI, OP_ENT (RA), 0, 0 },
  { INPUT, "simm_16", HW_H_SINT, CGEN_MODE_INT, OP_ENT (SIMM_16), 0, 0 },
  { OUTPUT, "cbit", HW_H_CBIT, CGEN_MODE_BI, 0, 0, 0 },
  { END, (const char *)0, (enum cgen_hw_type)0, (enum cgen_mode)0, (enum cgen_operand_type)0, 0, 0 }
};

#undef OP_ENT
#undef INPUT
#undef OUTPUT
#undef END
#undef COND_REF

/* Operand instance lookup table.  */

static const CGEN_OPINST *or1k_cgen_opinst_table[MAX_INSNS] = {
  0,
  & sfmt_l_j_ops[0],
  & sfmt_l_jal_ops[0],
  & sfmt_l_jr_ops[0],
  & sfmt_l_jalr_ops[0],
  & sfmt_l_bnf_ops[0],
  & sfmt_l_bnf_ops[0],
  & sfmt_l_trap_ops[0],
  & sfmt_l_trap_ops[0],
  & sfmt_l_rfe_ops[0],
  & sfmt_l_nop_ops[0],
  & sfmt_l_nop_ops[0],
  & sfmt_l_movhi_ops[0],
  & sfmt_l_mfspr_ops[0],
  & sfmt_l_mtspr_ops[0],
  & sfmt_l_lwz_ops[0],
  & sfmt_l_lwz_ops[0],
  & sfmt_l_lbz_ops[0],
  & sfmt_l_lbz_ops[0],
  & sfmt_l_lhz_ops[0],
  & sfmt_l_lhz_ops[0],
  & sfmt_l_sw_ops[0],
  & sfmt_l_sb_ops[0],
  & sfmt_l_sh_ops[0],
  & sfmt_l_sll_ops[0],
  & sfmt_l_slli_ops[0],
  & sfmt_l_sll_ops[0],
  & sfmt_l_slli_ops[0],
  & sfmt_l_sll_ops[0],
  & sfmt_l_slli_ops[0],
  & sfmt_l_sll_ops[0],
  & sfmt_l_slli_ops[0],
  & sfmt_l_add_ops[0],
  & sfmt_l_add_ops[0],
  & sfmt_l_add_ops[0],
  & sfmt_l_add_ops[0],
  & sfmt_l_add_ops[0],
  & sfmt_l_add_ops[0],
  & sfmt_l_add_ops[0],
  & sfmt_l_add_ops[0],
  & sfmt_l_add_ops[0],
  & sfmt_l_add_ops[0],
  & sfmt_l_addi_ops[0],
  & sfmt_l_addi_ops[0],
  & sfmt_l_addi_ops[0],
  & sfmt_l_addi_ops[0],
  & sfmt_l_addi_ops[0],
  & sfmt_l_addi_ops[0],
  & sfmt_l_sfgtu_ops[0],
  & sfmt_l_sfgtu_ops[0],
  & sfmt_l_sfgtu_ops[0],
  & sfmt_l_sfgtu_ops[0],
  & sfmt_l_sfgtu_ops[0],
  & sfmt_l_sfgtu_ops[0],
  & sfmt_l_sfgtu_ops[0],
  & sfmt_l_sfgtu_ops[0],
  & sfmt_l_sfgtui_ops[0],
  & sfmt_l_sfgtui_ops[0],
  & sfmt_l_sfgtui_ops[0],
  & sfmt_l_sfgtui_ops[0],
  & sfmt_l_sfgtsi_ops[0],
  & sfmt_l_sfgtsi_ops[0],
  & sfmt_l_sfgtsi_ops[0],
  & sfmt_l_sfgtsi_ops[0],
  & sfmt_l_sfgtu_ops[0],
  & sfmt_l_sfgtsi_ops[0],
  & sfmt_l_sfgtu_ops[0],
  & sfmt_l_sfgtsi_ops[0],
};

/* Function to call before using the operand instance table.  */

void
or1k_cgen_init_opinst_table (cd)
     CGEN_CPU_DESC cd;
{
  int i;
  const CGEN_OPINST **oi = & or1k_cgen_opinst_table[0];
  CGEN_INSN *insns = (CGEN_INSN *) cd->insn_table.init_entries;
  for (i = 0; i < MAX_INSNS; ++i)
    insns[i].opinst = oi[i];
}
