/* Simulator instruction semantics for or1k32bef.

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

#ifdef DEFINE_LABELS

  /* The labels have the case they have because the enum of insn types
     is all uppercase and in the non-stdc case the insn symbol is built
     into the enum name.  */

  static struct {
    int index;
    void *label;
  } labels[] = {
    { OR1K32BEF_INSN_X_INVALID, && case_sem_INSN_X_INVALID },
    { OR1K32BEF_INSN_X_AFTER, && case_sem_INSN_X_AFTER },
    { OR1K32BEF_INSN_X_BEFORE, && case_sem_INSN_X_BEFORE },
    { OR1K32BEF_INSN_X_CTI_CHAIN, && case_sem_INSN_X_CTI_CHAIN },
    { OR1K32BEF_INSN_X_CHAIN, && case_sem_INSN_X_CHAIN },
    { OR1K32BEF_INSN_X_BEGIN, && case_sem_INSN_X_BEGIN },
    { OR1K32BEF_INSN_L_J, && case_sem_INSN_L_J },
    { OR1K32BEF_INSN_L_JAL, && case_sem_INSN_L_JAL },
    { OR1K32BEF_INSN_L_JR, && case_sem_INSN_L_JR },
    { OR1K32BEF_INSN_L_JALR, && case_sem_INSN_L_JALR },
    { OR1K32BEF_INSN_L_BNF, && case_sem_INSN_L_BNF },
    { OR1K32BEF_INSN_L_BF, && case_sem_INSN_L_BF },
    { OR1K32BEF_INSN_L_TRAP, && case_sem_INSN_L_TRAP },
    { OR1K32BEF_INSN_L_SYS, && case_sem_INSN_L_SYS },
    { OR1K32BEF_INSN_L_RFE, && case_sem_INSN_L_RFE },
    { OR1K32BEF_INSN_L_NOP_IMM, && case_sem_INSN_L_NOP_IMM },
    { OR1K32BEF_INSN_L_NOP, && case_sem_INSN_L_NOP },
    { OR1K32BEF_INSN_L_MOVHI, && case_sem_INSN_L_MOVHI },
    { OR1K32BEF_INSN_L_MFSPR, && case_sem_INSN_L_MFSPR },
    { OR1K32BEF_INSN_L_MTSPR, && case_sem_INSN_L_MTSPR },
    { OR1K32BEF_INSN_L_LWZ, && case_sem_INSN_L_LWZ },
    { OR1K32BEF_INSN_L_LWS, && case_sem_INSN_L_LWS },
    { OR1K32BEF_INSN_L_LBZ, && case_sem_INSN_L_LBZ },
    { OR1K32BEF_INSN_L_LBS, && case_sem_INSN_L_LBS },
    { OR1K32BEF_INSN_L_LHZ, && case_sem_INSN_L_LHZ },
    { OR1K32BEF_INSN_L_LHS, && case_sem_INSN_L_LHS },
    { OR1K32BEF_INSN_L_SW, && case_sem_INSN_L_SW },
    { OR1K32BEF_INSN_L_SB, && case_sem_INSN_L_SB },
    { OR1K32BEF_INSN_L_SH, && case_sem_INSN_L_SH },
    { OR1K32BEF_INSN_L_SLL, && case_sem_INSN_L_SLL },
    { OR1K32BEF_INSN_L_SLLI, && case_sem_INSN_L_SLLI },
    { OR1K32BEF_INSN_L_SRL, && case_sem_INSN_L_SRL },
    { OR1K32BEF_INSN_L_SRLI, && case_sem_INSN_L_SRLI },
    { OR1K32BEF_INSN_L_SRA, && case_sem_INSN_L_SRA },
    { OR1K32BEF_INSN_L_SRAI, && case_sem_INSN_L_SRAI },
    { OR1K32BEF_INSN_L_ROR, && case_sem_INSN_L_ROR },
    { OR1K32BEF_INSN_L_RORI, && case_sem_INSN_L_RORI },
    { OR1K32BEF_INSN_L_ADD, && case_sem_INSN_L_ADD },
    { OR1K32BEF_INSN_L_SUB, && case_sem_INSN_L_SUB },
    { OR1K32BEF_INSN_L_AND, && case_sem_INSN_L_AND },
    { OR1K32BEF_INSN_L_OR, && case_sem_INSN_L_OR },
    { OR1K32BEF_INSN_L_XOR, && case_sem_INSN_L_XOR },
    { OR1K32BEF_INSN_L_ADDC, && case_sem_INSN_L_ADDC },
    { OR1K32BEF_INSN_L_MUL, && case_sem_INSN_L_MUL },
    { OR1K32BEF_INSN_L_MULU, && case_sem_INSN_L_MULU },
    { OR1K32BEF_INSN_L_DIV, && case_sem_INSN_L_DIV },
    { OR1K32BEF_INSN_L_DIVU, && case_sem_INSN_L_DIVU },
    { OR1K32BEF_INSN_L_ADDI, && case_sem_INSN_L_ADDI },
    { OR1K32BEF_INSN_L_ANDI, && case_sem_INSN_L_ANDI },
    { OR1K32BEF_INSN_L_ORI, && case_sem_INSN_L_ORI },
    { OR1K32BEF_INSN_L_XORI, && case_sem_INSN_L_XORI },
    { OR1K32BEF_INSN_L_MULI, && case_sem_INSN_L_MULI },
    { OR1K32BEF_INSN_L_ADDIC, && case_sem_INSN_L_ADDIC },
    { OR1K32BEF_INSN_L_SFGTU, && case_sem_INSN_L_SFGTU },
    { OR1K32BEF_INSN_L_SFGEU, && case_sem_INSN_L_SFGEU },
    { OR1K32BEF_INSN_L_SFLTU, && case_sem_INSN_L_SFLTU },
    { OR1K32BEF_INSN_L_SFLEU, && case_sem_INSN_L_SFLEU },
    { OR1K32BEF_INSN_L_SFGTS, && case_sem_INSN_L_SFGTS },
    { OR1K32BEF_INSN_L_SFGES, && case_sem_INSN_L_SFGES },
    { OR1K32BEF_INSN_L_SFLTS, && case_sem_INSN_L_SFLTS },
    { OR1K32BEF_INSN_L_SFLES, && case_sem_INSN_L_SFLES },
    { OR1K32BEF_INSN_L_SFGTUI, && case_sem_INSN_L_SFGTUI },
    { OR1K32BEF_INSN_L_SFGEUI, && case_sem_INSN_L_SFGEUI },
    { OR1K32BEF_INSN_L_SFLTUI, && case_sem_INSN_L_SFLTUI },
    { OR1K32BEF_INSN_L_SFLEUI, && case_sem_INSN_L_SFLEUI },
    { OR1K32BEF_INSN_L_SFGTSI, && case_sem_INSN_L_SFGTSI },
    { OR1K32BEF_INSN_L_SFGESI, && case_sem_INSN_L_SFGESI },
    { OR1K32BEF_INSN_L_SFLTSI, && case_sem_INSN_L_SFLTSI },
    { OR1K32BEF_INSN_L_SFLESI, && case_sem_INSN_L_SFLESI },
    { OR1K32BEF_INSN_L_SFEQ, && case_sem_INSN_L_SFEQ },
    { OR1K32BEF_INSN_L_SFEQI, && case_sem_INSN_L_SFEQI },
    { OR1K32BEF_INSN_L_SFNE, && case_sem_INSN_L_SFNE },
    { OR1K32BEF_INSN_L_SFNEI, && case_sem_INSN_L_SFNEI },
    { 0, 0 }
  };
  int i;

  for (i = 0; labels[i].label != 0; ++i)
    {
#if FAST_P
      CPU_IDESC (current_cpu) [labels[i].index].sem_fast_lab = labels[i].label;
#else
      CPU_IDESC (current_cpu) [labels[i].index].sem_full_lab = labels[i].label;
#endif
    }

#undef DEFINE_LABELS
#endif /* DEFINE_LABELS */

#ifdef DEFINE_SWITCH

/* If hyper-fast [well not unnecessarily slow] execution is selected, turn
   off frills like tracing and profiling.  */
/* FIXME: A better way would be to have TRACE_RESULT check for something
   that can cause it to be optimized out.  Another way would be to emit
   special handlers into the instruction "stream".  */

#if FAST_P
#undef TRACE_RESULT
#define TRACE_RESULT(cpu, abuf, name, type, val)
#endif

#undef GET_ATTR
#define GET_ATTR(cpu, num, attr) CGEN_ATTR_VALUE (NULL, abuf->idesc->attrs, CGEN_INSN_##attr)

{

#if WITH_SCACHE_PBB

/* Branch to next handler without going around main loop.  */
#define NEXT(vpc) goto * SEM_ARGBUF (vpc) -> semantic.sem_case
SWITCH (sem, SEM_ARGBUF (vpc) -> semantic.sem_case)

#else /* ! WITH_SCACHE_PBB */

#define NEXT(vpc) BREAK (sem)
#ifdef __GNUC__
#if FAST_P
  SWITCH (sem, SEM_ARGBUF (sc) -> idesc->sem_fast_lab)
#else
  SWITCH (sem, SEM_ARGBUF (sc) -> idesc->sem_full_lab)
#endif
#else
  SWITCH (sem, SEM_ARGBUF (sc) -> idesc->num)
#endif

#endif /* ! WITH_SCACHE_PBB */

    {

  CASE (sem, INSN_X_INVALID) : /* --invalid-- */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
    /* Update the recorded pc in the cpu state struct.
       Only necessary for WITH_SCACHE case, but to avoid the
       conditional compilation ....  */
    SET_H_PC (pc);
    /* Virtual insns have zero size.  Overwrite vpc with address of next insn
       using the default-insn-bitsize spec.  When executing insns in parallel
       we may want to queue the fault and continue execution.  */
    vpc = SEM_NEXT_VPC (sem_arg, pc, 4);
    vpc = sim_engine_invalid_insn (current_cpu, pc, vpc);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_X_AFTER) : /* --after-- */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_OR1K32BEF
    or1k32bef_pbb_after (current_cpu, sem_arg);
#endif
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_X_BEFORE) : /* --before-- */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_OR1K32BEF
    or1k32bef_pbb_before (current_cpu, sem_arg);
#endif
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_X_CTI_CHAIN) : /* --cti-chain-- */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_OR1K32BEF
#ifdef DEFINE_SWITCH
    vpc = or1k32bef_pbb_cti_chain (current_cpu, sem_arg,
			       pbb_br_type, pbb_br_npc);
    BREAK (sem);
#else
    /* FIXME: Allow provision of explicit ifmt spec in insn spec.  */
    vpc = or1k32bef_pbb_cti_chain (current_cpu, sem_arg,
			       CPU_PBB_BR_TYPE (current_cpu),
			       CPU_PBB_BR_NPC (current_cpu));
#endif
#endif
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_X_CHAIN) : /* --chain-- */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_OR1K32BEF
    vpc = or1k32bef_pbb_chain (current_cpu, sem_arg);
#ifdef DEFINE_SWITCH
    BREAK (sem);
#endif
#endif
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_X_BEGIN) : /* --begin-- */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_OR1K32BEF
#if defined DEFINE_SWITCH || defined FAST_P
    /* In the switch case FAST_P is a constant, allowing several optimizations
       in any called inline functions.  */
    vpc = or1k32bef_pbb_begin (current_cpu, FAST_P);
#else
#if 0 /* cgen engine can't handle dynamic fast/full switching yet.  */
    vpc = or1k32bef_pbb_begin (current_cpu, STATE_RUN_FAST_P (CPU_STATE (current_cpu)));
#else
    vpc = or1k32bef_pbb_begin (current_cpu, 0);
#endif
#endif
#endif
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_J) : /* l.j ${disp-26} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_jal.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

{
  {
    USI opval = FLD (i_disp_26);
    SEM_BRANCH_VIA_CACHE (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_JAL) : /* l.jal ${disp-26} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_jal.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

{
  {
    SI opval = ADDSI (CPU (h_delay_insn), 4);
    CPU (h_gr[((UINT) 9)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }
{
  {
    USI opval = FLD (i_disp_26);
    SEM_BRANCH_VIA_CACHE (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}
}

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_JR) : /* l.jr $rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_jalr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

{
  {
    USI opval = CPU (h_gr[FLD (f_r3)]);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_JALR) : /* l.jalr $rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_jalr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

{
  SI tmp_tmp_slot;
  tmp_tmp_slot = CPU (h_gr[FLD (f_r3)]);
  {
    SI opval = ADDSI (CPU (h_delay_insn), 4);
    CPU (h_gr[((UINT) 9)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }
{
  {
    USI opval = tmp_tmp_slot;
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}
}

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_BNF) : /* l.bnf ${disp-26} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_jal.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

if (EQBI (CPU (h_cbit), 0)) {
{
  {
    USI opval = FLD (i_disp_26);
    SEM_BRANCH_VIA_CACHE (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 3);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}
} else {
if (EQBI (CPU (h_cbit), 1)) {
{
  {
    USI opval = ADDSI (pc, 8);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 3);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}
}
}

  abuf->written = written;
  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_BF) : /* l.bf ${disp-26} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_jal.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

if (EQBI (CPU (h_cbit), 1)) {
{
  {
    USI opval = FLD (i_disp_26);
    SEM_BRANCH_VIA_CACHE (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 3);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}
} else {
if (EQBI (CPU (h_cbit), 0)) {
{
  {
    USI opval = ADDSI (pc, 8);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 3);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}
}
}

  abuf->written = written;
  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_TRAP) : /* l.trap ${uimm-16} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    USI opval = or1k_cpu_exception_entry (current_cpu, 14, pc);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SYS) : /* l.sys ${uimm-16} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    USI opval = or1k_cpu_exception_entry (current_cpu, 12, pc);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_RFE) : /* l.rfe */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

{
or1k32bef_h_spr_set_handler (current_cpu, 17, or1k32bef_h_spr_get_handler (current_cpu, 48));
  {
    USI opval = or1k32bef_h_spr_get_handler (current_cpu, 32);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  SEM_BRANCH_FINI (vpc);
#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_NOP_IMM) : /* l.nop ${uimm-16} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mfspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

or1k32bef_nop_handler (current_cpu, FLD (f_uimm16));

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_NOP) : /* l.nop */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_empty.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

((void) 0); /*nop*/

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_MOVHI) : /* l.movhi $rD,$hi16 */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = SLLSI (FLD (f_simm16), 16);
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_MFSPR) : /* l.mfspr $rD,$rA,${uimm-16} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mfspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = or1k32bef_h_spr_get_handler (current_cpu, ORSI (CPU (h_gr[FLD (f_r2)]), FLD (f_uimm16)));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_MTSPR) : /* l.mtspr $rA,$rB,${ui16nc} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

or1k32bef_h_spr_set_handler (current_cpu, ORSI (CPU (h_gr[FLD (f_r2)]), FLD (f_i16nc)), CPU (h_gr[FLD (f_r3)]));

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_LWZ) : /* l.lwz $rD,${simm-16}($rA) */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = GETMEMSI (current_cpu, pc, ADDSI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16)));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_LWS) : /* l.lws $rD,${simm-16}($rA) */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = GETMEMSI (current_cpu, pc, ADDSI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16)));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_LBZ) : /* l.lbz $rD,${simm-16}($rA) */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ZEXTQISI (GETMEMQI (current_cpu, pc, ADDSI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16))));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_LBS) : /* l.lbs $rD,${simm-16}($rA) */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = EXTQISI (GETMEMQI (current_cpu, pc, ADDSI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16))));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_LHZ) : /* l.lhz $rD,${simm-16}($rA) */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ZEXTHISI (GETMEMHI (current_cpu, pc, ADDSI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16))));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_LHS) : /* l.lhs $rD,${simm-16}($rA) */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = EXTHISI (GETMEMHI (current_cpu, pc, ADDSI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16))));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SW) : /* l.sw ${ui16nc}($rA),$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = CPU (h_gr[FLD (f_r3)]);
    SETMEMSI (current_cpu, pc, ADDSI (CPU (h_gr[FLD (f_r2)]), FLD (f_i16nc)), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SB) : /* l.sb ${ui16nc}($rA),$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    QI opval = CPU (h_gr[FLD (f_r3)]);
    SETMEMQI (current_cpu, pc, ADDSI (CPU (h_gr[FLD (f_r2)]), FLD (f_i16nc)), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SH) : /* l.sh ${ui16nc}($rA),$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    HI opval = CPU (h_gr[FLD (f_r3)]);
    SETMEMHI (current_cpu, pc, ADDSI (CPU (h_gr[FLD (f_r2)]), FLD (f_i16nc)), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SLL) : /* l.sll $rD,$rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_sll.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = SLLSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SLLI) : /* l.slli $rD,$rA,${uimm-6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_slli.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = SLLSI (CPU (h_gr[FLD (f_r2)]), FLD (f_uimm6));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SRL) : /* l.srl $rD,$rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_sll.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = SRLSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SRLI) : /* l.srli $rD,$rA,${uimm-6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_slli.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = SRLSI (CPU (h_gr[FLD (f_r2)]), FLD (f_uimm6));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SRA) : /* l.sra $rD,$rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_sll.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = SRASI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SRAI) : /* l.srai $rD,$rA,${uimm-6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_slli.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = SRASI (CPU (h_gr[FLD (f_r2)]), FLD (f_uimm6));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_ROR) : /* l.ror $rD,$rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_sll.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = RORSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_RORI) : /* l.rori $rD,$rA,${uimm-6} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_slli.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = RORSI (CPU (h_gr[FLD (f_r2)]), FLD (f_uimm6));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_ADD) : /* l.add $rD,$rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_sll.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ADDSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SUB) : /* l.sub $rD,$rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_sll.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = SUBSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_AND) : /* l.and $rD,$rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_sll.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ANDSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_OR) : /* l.or $rD,$rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_sll.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ORSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_XOR) : /* l.xor $rD,$rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_sll.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = XORSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_ADDC) : /* l.addc $rD,$rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_sll.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ADDSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_MUL) : /* l.mul $rD,$rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_sll.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = MULDI (EXTSIDI (CPU (h_gr[FLD (f_r2)])), EXTSIDI (CPU (h_gr[FLD (f_r3)])));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_MULU) : /* l.mulu $rD,$rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_sll.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = MULDI (ZEXTSIDI (CPU (h_gr[FLD (f_r2)])), ZEXTSIDI (CPU (h_gr[FLD (f_r3)])));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_DIV) : /* l.div $rD,$rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_sll.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = DIVSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_DIVU) : /* l.divu $rD,$rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_sll.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = UDIVSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_ADDI) : /* l.addi $rD,$rA,$lo16 */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ADDSI (CPU (h_gr[FLD (f_r2)]), EXTHISI (TRUNCSIHI (FLD (f_lo16))));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_ANDI) : /* l.andi $rD,$rA,$lo16 */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ANDSI (CPU (h_gr[FLD (f_r2)]), ZEXTHISI (TRUNCSIHI (FLD (f_lo16))));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_ORI) : /* l.ori $rD,$rA,$lo16 */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ORSI (CPU (h_gr[FLD (f_r2)]), ZEXTHISI (TRUNCSIHI (FLD (f_lo16))));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_XORI) : /* l.xori $rD,$rA,$lo16 */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = XORSI (CPU (h_gr[FLD (f_r2)]), EXTHISI (TRUNCSIHI (FLD (f_lo16))));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_MULI) : /* l.muli $rD,$rA,$lo16 */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = MULSI (CPU (h_gr[FLD (f_r2)]), EXTHISI (TRUNCSIHI (FLD (f_lo16))));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_ADDIC) : /* l.addic $rD,$rA,$lo16 */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_addi.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ADDSI (CPU (h_gr[FLD (f_r2)]), EXTHISI (TRUNCSIHI (FLD (f_lo16))));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFGTU) : /* l.sfgtu $rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = GTSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFGEU) : /* l.sfgeu $rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = GESI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFLTU) : /* l.sfltu $rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = LTSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFLEU) : /* l.sfleu $rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = LESI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFGTS) : /* l.sfgts $rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = GTSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFGES) : /* l.sfges $rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = GESI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFLTS) : /* l.sflts $rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = LTSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFLES) : /* l.sfles $rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = LESI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFGTUI) : /* l.sfgtui $rA,${uimm-16} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mfspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = GTSI (CPU (h_gr[FLD (f_r2)]), FLD (f_uimm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFGEUI) : /* l.sfgeui $rA,${uimm-16} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mfspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = GESI (CPU (h_gr[FLD (f_r2)]), FLD (f_uimm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFLTUI) : /* l.sfltui $rA,${uimm-16} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mfspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = LTSI (CPU (h_gr[FLD (f_r2)]), FLD (f_uimm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFLEUI) : /* l.sfleui $rA,${uimm-16} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mfspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = LESI (CPU (h_gr[FLD (f_r2)]), FLD (f_uimm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFGTSI) : /* l.sfgtsi $rA,${simm-16} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = GTSI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFGESI) : /* l.sfgesi $rA,${simm-16} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = GESI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFLTSI) : /* l.sfltsi $rA,${simm-16} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = LTSI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFLESI) : /* l.sflesi $rA,${simm-16} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = LESI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFEQ) : /* l.sfeq $rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = EQSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFEQI) : /* l.sfeqi $rA,${simm-16} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = EQSI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFNE) : /* l.sfne $rA,$rB */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = NESI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);

  CASE (sem, INSN_L_SFNEI) : /* l.sfnei $rA,${simm-16} */
{
  SEM_ARG sem_arg = SEM_SEM_ARG (vpc, sc);
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = NESI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

#undef FLD
}
  NEXT (vpc);


    }
  ENDSWITCH (sem) /* End of semantic switch.  */

  /* At this point `vpc' contains the next insn to execute.  */
}

#undef DEFINE_SWITCH
#endif /* DEFINE_SWITCH */
