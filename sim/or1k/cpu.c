/* Misc. support for CPU family or1k32bef.

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
#include "cgen-ops.h"

/* Get the value of h-pc.  */

USI
or1k32bef_h_pc_get (SIM_CPU *current_cpu)
{
  return CPU (h_pc);
}

/* Set a value for h-pc.  */

void
or1k32bef_h_pc_set (SIM_CPU *current_cpu, USI newval)
{
  CPU (h_pc) = newval;
}

/* Get the value of h-gr.  */

SI
or1k32bef_h_gr_get (SIM_CPU *current_cpu, UINT regno)
{
  return CPU (h_gr[regno]);
}

/* Set a value for h-gr.  */

void
or1k32bef_h_gr_set (SIM_CPU *current_cpu, UINT regno, SI newval)
{
  CPU (h_gr[regno]) = newval;
}

/* Get the value of h-spr.  */

SI
or1k32bef_h_spr_get (SIM_CPU *current_cpu, UINT regno)
{
  return GET_H_SPR (regno);
}

/* Set a value for h-spr.  */

void
or1k32bef_h_spr_set (SIM_CPU *current_cpu, UINT regno, SI newval)
{
  SET_H_SPR (regno, newval);
}

/* Get the value of h-cbit.  */

BI
or1k32bef_h_cbit_get (SIM_CPU *current_cpu)
{
  return CPU (h_cbit);
}

/* Set a value for h-cbit.  */

void
or1k32bef_h_cbit_set (SIM_CPU *current_cpu, BI newval)
{
  CPU (h_cbit) = newval;
}

/* Get the value of h-delay-insn.  */

SI
or1k32bef_h_delay_insn_get (SIM_CPU *current_cpu)
{
  return CPU (h_delay_insn);
}

/* Set a value for h-delay-insn.  */

void
or1k32bef_h_delay_insn_set (SIM_CPU *current_cpu, SI newval)
{
  CPU (h_delay_insn) = newval;
}

/* Record trace results for INSN.  */

void
or1k32bef_record_trace_results (SIM_CPU *current_cpu, CGEN_INSN *insn,
			    int *indices, TRACE_RECORD *tr)
{
}
