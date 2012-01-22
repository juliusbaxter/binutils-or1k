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

#define WANT_CPU or1k32bef
#define WANT_CPU_OR1K32BEF

#include "sim-main.h"
#include "cgen-mem.h"
#include "cgen-ops.h"

#undef GET_ATTR
#define GET_ATTR(cpu, num, attr) CGEN_ATTR_VALUE (NULL, abuf->idesc->attrs, CGEN_INSN_##attr)

/* This is used so that we can compile two copies of the semantic code,
   one with full feature support and one without that runs fast(er).
   FAST_P, when desired, is defined on the command line, -DFAST_P=1.  */
#if FAST_P
#define SEM_FN_NAME(cpu,fn) XCONCAT3 (cpu,_semf_,fn)
#undef TRACE_RESULT
#define TRACE_RESULT(cpu, abuf, name, type, val)
#else
#define SEM_FN_NAME(cpu,fn) XCONCAT3 (cpu,_sem_,fn)
#endif

/* x-invalid: --invalid-- */

static SEM_PC
SEM_FN_NAME (or1k32bef,x_invalid) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

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

  return vpc;
#undef FLD
}

/* x-after: --after-- */

static SEM_PC
SEM_FN_NAME (or1k32bef,x_after) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_OR1K32BEF
    or1k32bef_pbb_after (current_cpu, sem_arg);
#endif
  }

  return vpc;
#undef FLD
}

/* x-before: --before-- */

static SEM_PC
SEM_FN_NAME (or1k32bef,x_before) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_OR1K32BEF
    or1k32bef_pbb_before (current_cpu, sem_arg);
#endif
  }

  return vpc;
#undef FLD
}

/* x-cti-chain: --cti-chain-- */

static SEM_PC
SEM_FN_NAME (or1k32bef,x_cti_chain) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

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

  return vpc;
#undef FLD
}

/* x-chain: --chain-- */

static SEM_PC
SEM_FN_NAME (or1k32bef,x_chain) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_OR1K32BEF
    vpc = or1k32bef_pbb_chain (current_cpu, sem_arg);
#ifdef DEFINE_SWITCH
    BREAK (sem);
#endif
#endif
  }

  return vpc;
#undef FLD
}

/* x-begin: --begin-- */

static SEM_PC
SEM_FN_NAME (or1k32bef,x_begin) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

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

  return vpc;
#undef FLD
}

/* l-j: l.j ${disp-26} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_j) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_jal.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

{
  {
    USI opval = FLD (i_disp_26);
    SEM_BRANCH_VIA_CACHE (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* l-jal: l.jal ${disp-26} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_jal) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_jal.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

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
  return vpc;
#undef FLD
}

/* l-jr: l.jr $rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_jr) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

{
  {
    USI opval = CPU (h_gr[FLD (f_r3)]);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* l-jalr: l.jalr $rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_jalr) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

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
  return vpc;
#undef FLD
}

/* l-bnf: l.bnf ${disp-26} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_bnf) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_jal.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

if (EQBI (CPU (h_cbit), 0)) {
{
{
  {
    USI opval = FLD (i_disp_26);
    SEM_BRANCH_VIA_CACHE (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 2);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}
}
}

  abuf->written = written;
  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* l-bf: l.bf ${disp-26} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_bf) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_jal.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

if (EQBI (CPU (h_cbit), 1)) {
{
{
  {
    USI opval = FLD (i_disp_26);
    SEM_BRANCH_VIA_CACHE (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 2);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}
}
}

  abuf->written = written;
  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* l-trap: l.trap ${uimm-16} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_trap) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    USI opval = or1k32bef_cpu_exception_entry (current_cpu, 14, pc);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* l-sys: l.sys ${uimm-16} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sys) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    USI opval = or1k32bef_cpu_exception_entry (current_cpu, 12, pc);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* l-rfe: l.rfe */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_rfe) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

{
or1k32bef_cpu_mtspr (current_cpu, 17, or1k32bef_cpu_mfspr (current_cpu, 48));
  {
    USI opval = or1k32bef_cpu_mfspr (current_cpu, 32);
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* l-nop: l.nop */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_nop) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* l-nop-imm: l.nop ${uimm-16} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_nop_imm) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* l-movhi: l.movhi $rD,$hi16 */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_movhi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = SLLSI (FLD (f_simm16), 16);
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-mfspr: l.mfspr $rD,$rA,${uimm-16} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_mfspr) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mfspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = or1k32bef_cpu_mfspr (current_cpu, ORSI (CPU (h_gr[FLD (f_r2)]), FLD (f_uimm16)));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-mtspr: l.mtspr $rA,$rB,${ui16nc} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_mtspr) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

or1k32bef_cpu_mtspr (current_cpu, ORSI (CPU (h_gr[FLD (f_r2)]), FLD (f_i16nc)), CPU (h_gr[FLD (f_r3)]));

  return vpc;
#undef FLD
}

/* l-lwz: l.lwz $rD,${simm-16}($rA) */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_lwz) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = GETMEMSI (current_cpu, pc, ADDSI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16)));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-lws: l.lws $rD,${simm-16}($rA) */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_lws) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = GETMEMSI (current_cpu, pc, ADDSI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16)));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-lbz: l.lbz $rD,${simm-16}($rA) */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_lbz) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ZEXTQISI (GETMEMQI (current_cpu, pc, ADDSI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16))));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-lbs: l.lbs $rD,${simm-16}($rA) */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_lbs) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = EXTQISI (GETMEMQI (current_cpu, pc, ADDSI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16))));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-lhz: l.lhz $rD,${simm-16}($rA) */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_lhz) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ZEXTHISI (GETMEMHI (current_cpu, pc, ADDSI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16))));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-lhs: l.lhs $rD,${simm-16}($rA) */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_lhs) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = EXTHISI (GETMEMHI (current_cpu, pc, ADDSI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16))));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sw: l.sw ${ui16nc}($rA),$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = CPU (h_gr[FLD (f_r3)]);
    SETMEMSI (current_cpu, pc, ADDSI (CPU (h_gr[FLD (f_r2)]), FLD (f_i16nc)), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sb: l.sb ${ui16nc}($rA),$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sb) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    QI opval = CPU (h_gr[FLD (f_r3)]);
    SETMEMQI (current_cpu, pc, ADDSI (CPU (h_gr[FLD (f_r2)]), FLD (f_i16nc)), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sh: l.sh ${ui16nc}($rA),$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sh) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    HI opval = CPU (h_gr[FLD (f_r3)]);
    SETMEMHI (current_cpu, pc, ADDSI (CPU (h_gr[FLD (f_r2)]), FLD (f_i16nc)), opval);
    TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sll: l.sll $rD,$rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sll) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_sll.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = SLLSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-slli: l.slli $rD,$rA,${uimm-6} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_slli) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_slli.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = SLLSI (CPU (h_gr[FLD (f_r2)]), FLD (f_uimm6));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-srl: l.srl $rD,$rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_srl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_sll.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = SRLSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-srli: l.srli $rD,$rA,${uimm-6} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_srli) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_slli.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = SRLSI (CPU (h_gr[FLD (f_r2)]), FLD (f_uimm6));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sra: l.sra $rD,$rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sra) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_sll.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = SRASI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-srai: l.srai $rD,$rA,${uimm-6} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_srai) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_slli.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = SRASI (CPU (h_gr[FLD (f_r2)]), FLD (f_uimm6));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-ror: l.ror $rD,$rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_ror) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_sll.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = RORSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-rori: l.rori $rD,$rA,${uimm-6} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_rori) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_slli.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = RORSI (CPU (h_gr[FLD (f_r2)]), FLD (f_uimm6));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-add: l.add $rD,$rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_add) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_sll.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ADDSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sub: l.sub $rD,$rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sub) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_sll.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = SUBSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-and: l.and $rD,$rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_and) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_sll.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ANDSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-or: l.or $rD,$rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_or) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_sll.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ORSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-xor: l.xor $rD,$rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_xor) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_sll.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = XORSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-addc: l.addc $rD,$rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_addc) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_sll.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ADDSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-mul: l.mul $rD,$rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_mul) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_sll.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = MULDI (EXTSIDI (CPU (h_gr[FLD (f_r2)])), EXTSIDI (CPU (h_gr[FLD (f_r3)])));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-mulu: l.mulu $rD,$rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_mulu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_sll.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = MULDI (ZEXTSIDI (CPU (h_gr[FLD (f_r2)])), ZEXTSIDI (CPU (h_gr[FLD (f_r3)])));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-div: l.div $rD,$rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_div) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_sll.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = DIVSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-divu: l.divu $rD,$rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_divu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_sll.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = UDIVSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-addi: l.addi $rD,$rA,$lo16 */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_addi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ADDSI (CPU (h_gr[FLD (f_r2)]), EXTSISI (ANDSI (FLD (f_lo16), 65535)));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-andi: l.andi $rD,$rA,$lo16 */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_andi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ANDSI (CPU (h_gr[FLD (f_r2)]), ZEXTSISI (ANDSI (FLD (f_lo16), 65535)));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-ori: l.ori $rD,$rA,$lo16 */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_ori) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ORSI (CPU (h_gr[FLD (f_r2)]), ZEXTSISI (ANDSI (FLD (f_lo16), 65535)));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-xori: l.xori $rD,$rA,$lo16 */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_xori) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = XORSI (CPU (h_gr[FLD (f_r2)]), EXTSISI (ANDSI (FLD (f_lo16), 65535)));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-muli: l.muli $rD,$rA,$lo16 */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_muli) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = MULSI (CPU (h_gr[FLD (f_r2)]), EXTSISI (ANDSI (FLD (f_lo16), 65535)));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l.addic: l.addic $rD,$rA,$lo16 */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_addic) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_addi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    SI opval = ADDSI (CPU (h_gr[FLD (f_r2)]), EXTSISI (ANDSI (FLD (f_lo16), 65535)));
    CPU (h_gr[FLD (f_r1)]) = opval;
    TRACE_RESULT (current_cpu, abuf, "gr", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sfgtu: l.sfgtu $rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sfgtu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = GTSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sfgeu: l.sfgeu $rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sfgeu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = GESI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sfltu: l.sfltu $rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sfltu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = LTSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sfleu: l.sfleu $rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sfleu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = LESI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sfgts: l.sfgts $rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sfgts) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = GTSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sfges: l.sfges $rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sfges) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = GESI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sflts: l.sflts $rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sflts) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = LTSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sfles: l.sfles $rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sfles) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = LESI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sfgtui: l.sfgtui $rA,${uimm-16} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sfgtui) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mfspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = GTSI (CPU (h_gr[FLD (f_r2)]), FLD (f_uimm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sfgeui: l.sfgeui $rA,${uimm-16} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sfgeui) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mfspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = GESI (CPU (h_gr[FLD (f_r2)]), FLD (f_uimm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sfltui: l.sfltui $rA,${uimm-16} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sfltui) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mfspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = LTSI (CPU (h_gr[FLD (f_r2)]), FLD (f_uimm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sfleui: l.sfleui $rA,${uimm-16} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sfleui) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mfspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = LESI (CPU (h_gr[FLD (f_r2)]), FLD (f_uimm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sfgtsi: l.sfgtsi $rA,${simm-16} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sfgtsi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = GTSI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sfgesi: l.sfgesi $rA,${simm-16} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sfgesi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = GESI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sfltsi: l.sfltsi $rA,${simm-16} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sfltsi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = LTSI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sflesi: l.sflesi $rA,${simm-16} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sflesi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = LESI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sfeq: l.sfeq $rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sfeq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = EQSI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sfeqi: l.sfeqi $rA,${simm-16} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sfeqi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = EQSI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sfne: l.sfne $rA,$rB */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sfne) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_mtspr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = NESI (CPU (h_gr[FLD (f_r2)]), CPU (h_gr[FLD (f_r3)]));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* l-sfnei: l.sfnei $rA,${simm-16} */

static SEM_PC
SEM_FN_NAME (or1k32bef,l_sfnei) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_l_lwz.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  CPU (h_delay_insn) = ADDSI (pc, 4);

  {
    BI opval = NESI (CPU (h_gr[FLD (f_r2)]), FLD (f_simm16));
    CPU (h_cbit) = opval;
    TRACE_RESULT (current_cpu, abuf, "cbit", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* Table of all semantic fns.  */

static const struct sem_fn_desc sem_fns[] = {
  { OR1K32BEF_INSN_X_INVALID, SEM_FN_NAME (or1k32bef,x_invalid) },
  { OR1K32BEF_INSN_X_AFTER, SEM_FN_NAME (or1k32bef,x_after) },
  { OR1K32BEF_INSN_X_BEFORE, SEM_FN_NAME (or1k32bef,x_before) },
  { OR1K32BEF_INSN_X_CTI_CHAIN, SEM_FN_NAME (or1k32bef,x_cti_chain) },
  { OR1K32BEF_INSN_X_CHAIN, SEM_FN_NAME (or1k32bef,x_chain) },
  { OR1K32BEF_INSN_X_BEGIN, SEM_FN_NAME (or1k32bef,x_begin) },
  { OR1K32BEF_INSN_L_J, SEM_FN_NAME (or1k32bef,l_j) },
  { OR1K32BEF_INSN_L_JAL, SEM_FN_NAME (or1k32bef,l_jal) },
  { OR1K32BEF_INSN_L_JR, SEM_FN_NAME (or1k32bef,l_jr) },
  { OR1K32BEF_INSN_L_JALR, SEM_FN_NAME (or1k32bef,l_jalr) },
  { OR1K32BEF_INSN_L_BNF, SEM_FN_NAME (or1k32bef,l_bnf) },
  { OR1K32BEF_INSN_L_BF, SEM_FN_NAME (or1k32bef,l_bf) },
  { OR1K32BEF_INSN_L_TRAP, SEM_FN_NAME (or1k32bef,l_trap) },
  { OR1K32BEF_INSN_L_SYS, SEM_FN_NAME (or1k32bef,l_sys) },
  { OR1K32BEF_INSN_L_RFE, SEM_FN_NAME (or1k32bef,l_rfe) },
  { OR1K32BEF_INSN_L_NOP, SEM_FN_NAME (or1k32bef,l_nop) },
  { OR1K32BEF_INSN_L_NOP_IMM, SEM_FN_NAME (or1k32bef,l_nop_imm) },
  { OR1K32BEF_INSN_L_MOVHI, SEM_FN_NAME (or1k32bef,l_movhi) },
  { OR1K32BEF_INSN_L_MFSPR, SEM_FN_NAME (or1k32bef,l_mfspr) },
  { OR1K32BEF_INSN_L_MTSPR, SEM_FN_NAME (or1k32bef,l_mtspr) },
  { OR1K32BEF_INSN_L_LWZ, SEM_FN_NAME (or1k32bef,l_lwz) },
  { OR1K32BEF_INSN_L_LWS, SEM_FN_NAME (or1k32bef,l_lws) },
  { OR1K32BEF_INSN_L_LBZ, SEM_FN_NAME (or1k32bef,l_lbz) },
  { OR1K32BEF_INSN_L_LBS, SEM_FN_NAME (or1k32bef,l_lbs) },
  { OR1K32BEF_INSN_L_LHZ, SEM_FN_NAME (or1k32bef,l_lhz) },
  { OR1K32BEF_INSN_L_LHS, SEM_FN_NAME (or1k32bef,l_lhs) },
  { OR1K32BEF_INSN_L_SW, SEM_FN_NAME (or1k32bef,l_sw) },
  { OR1K32BEF_INSN_L_SB, SEM_FN_NAME (or1k32bef,l_sb) },
  { OR1K32BEF_INSN_L_SH, SEM_FN_NAME (or1k32bef,l_sh) },
  { OR1K32BEF_INSN_L_SLL, SEM_FN_NAME (or1k32bef,l_sll) },
  { OR1K32BEF_INSN_L_SLLI, SEM_FN_NAME (or1k32bef,l_slli) },
  { OR1K32BEF_INSN_L_SRL, SEM_FN_NAME (or1k32bef,l_srl) },
  { OR1K32BEF_INSN_L_SRLI, SEM_FN_NAME (or1k32bef,l_srli) },
  { OR1K32BEF_INSN_L_SRA, SEM_FN_NAME (or1k32bef,l_sra) },
  { OR1K32BEF_INSN_L_SRAI, SEM_FN_NAME (or1k32bef,l_srai) },
  { OR1K32BEF_INSN_L_ROR, SEM_FN_NAME (or1k32bef,l_ror) },
  { OR1K32BEF_INSN_L_RORI, SEM_FN_NAME (or1k32bef,l_rori) },
  { OR1K32BEF_INSN_L_ADD, SEM_FN_NAME (or1k32bef,l_add) },
  { OR1K32BEF_INSN_L_SUB, SEM_FN_NAME (or1k32bef,l_sub) },
  { OR1K32BEF_INSN_L_AND, SEM_FN_NAME (or1k32bef,l_and) },
  { OR1K32BEF_INSN_L_OR, SEM_FN_NAME (or1k32bef,l_or) },
  { OR1K32BEF_INSN_L_XOR, SEM_FN_NAME (or1k32bef,l_xor) },
  { OR1K32BEF_INSN_L_ADDC, SEM_FN_NAME (or1k32bef,l_addc) },
  { OR1K32BEF_INSN_L_MUL, SEM_FN_NAME (or1k32bef,l_mul) },
  { OR1K32BEF_INSN_L_MULU, SEM_FN_NAME (or1k32bef,l_mulu) },
  { OR1K32BEF_INSN_L_DIV, SEM_FN_NAME (or1k32bef,l_div) },
  { OR1K32BEF_INSN_L_DIVU, SEM_FN_NAME (or1k32bef,l_divu) },
  { OR1K32BEF_INSN_L_ADDI, SEM_FN_NAME (or1k32bef,l_addi) },
  { OR1K32BEF_INSN_L_ANDI, SEM_FN_NAME (or1k32bef,l_andi) },
  { OR1K32BEF_INSN_L_ORI, SEM_FN_NAME (or1k32bef,l_ori) },
  { OR1K32BEF_INSN_L_XORI, SEM_FN_NAME (or1k32bef,l_xori) },
  { OR1K32BEF_INSN_L_MULI, SEM_FN_NAME (or1k32bef,l_muli) },
  { OR1K32BEF_INSN_L_ADDIC, SEM_FN_NAME (or1k32bef,l_addic) },
  { OR1K32BEF_INSN_L_SFGTU, SEM_FN_NAME (or1k32bef,l_sfgtu) },
  { OR1K32BEF_INSN_L_SFGEU, SEM_FN_NAME (or1k32bef,l_sfgeu) },
  { OR1K32BEF_INSN_L_SFLTU, SEM_FN_NAME (or1k32bef,l_sfltu) },
  { OR1K32BEF_INSN_L_SFLEU, SEM_FN_NAME (or1k32bef,l_sfleu) },
  { OR1K32BEF_INSN_L_SFGTS, SEM_FN_NAME (or1k32bef,l_sfgts) },
  { OR1K32BEF_INSN_L_SFGES, SEM_FN_NAME (or1k32bef,l_sfges) },
  { OR1K32BEF_INSN_L_SFLTS, SEM_FN_NAME (or1k32bef,l_sflts) },
  { OR1K32BEF_INSN_L_SFLES, SEM_FN_NAME (or1k32bef,l_sfles) },
  { OR1K32BEF_INSN_L_SFGTUI, SEM_FN_NAME (or1k32bef,l_sfgtui) },
  { OR1K32BEF_INSN_L_SFGEUI, SEM_FN_NAME (or1k32bef,l_sfgeui) },
  { OR1K32BEF_INSN_L_SFLTUI, SEM_FN_NAME (or1k32bef,l_sfltui) },
  { OR1K32BEF_INSN_L_SFLEUI, SEM_FN_NAME (or1k32bef,l_sfleui) },
  { OR1K32BEF_INSN_L_SFGTSI, SEM_FN_NAME (or1k32bef,l_sfgtsi) },
  { OR1K32BEF_INSN_L_SFGESI, SEM_FN_NAME (or1k32bef,l_sfgesi) },
  { OR1K32BEF_INSN_L_SFLTSI, SEM_FN_NAME (or1k32bef,l_sfltsi) },
  { OR1K32BEF_INSN_L_SFLESI, SEM_FN_NAME (or1k32bef,l_sflesi) },
  { OR1K32BEF_INSN_L_SFEQ, SEM_FN_NAME (or1k32bef,l_sfeq) },
  { OR1K32BEF_INSN_L_SFEQI, SEM_FN_NAME (or1k32bef,l_sfeqi) },
  { OR1K32BEF_INSN_L_SFNE, SEM_FN_NAME (or1k32bef,l_sfne) },
  { OR1K32BEF_INSN_L_SFNEI, SEM_FN_NAME (or1k32bef,l_sfnei) },
  { 0, 0 }
};

/* Add the semantic fns to IDESC_TABLE.  */

void
SEM_FN_NAME (or1k32bef,init_idesc_table) (SIM_CPU *current_cpu)
{
  IDESC *idesc_table = CPU_IDESC (current_cpu);
  const struct sem_fn_desc *sf;
  int mach_num = MACH_NUM (CPU_MACH (current_cpu));

  for (sf = &sem_fns[0]; sf->fn != 0; ++sf)
    {
      const CGEN_INSN *insn = idesc_table[sf->index].idata;
      int valid_p = (CGEN_INSN_VIRTUAL_P (insn)
		     || CGEN_INSN_MACH_HAS_P (insn, mach_num));
#if FAST_P
      if (valid_p)
	idesc_table[sf->index].sem_fast = sf->fn;
      else
	idesc_table[sf->index].sem_fast = SEM_FN_NAME (or1k32bef,x_invalid);
#else
      if (valid_p)
	idesc_table[sf->index].sem_full = sf->fn;
      else
	idesc_table[sf->index].sem_full = SEM_FN_NAME (or1k32bef,x_invalid);
#endif
    }
}

