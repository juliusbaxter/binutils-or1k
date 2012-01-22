/* OR1K 32-bit big-endian CPU simulator support code.
   Contributed by Julius Baxter <juliusbaxter@gmail.com>

   Copyright (C) 2011 Free Software Foundation, Inc.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#define WANT_CPU or1k32bef
#define WANT_CPU_OR1K32BEF

#include "sim-main.h"
#include "cgen-mem.h"
#include "cgen-ops.h"

#include "spr-defs.h"

//#define CPU_SPR(cpu, spr_num) cpu->cpu_data.hardware.h_spr[spr_num]

/* The contents of BUF are in target byte order.  */

int
or1k32bef_fetch_register (SIM_CPU * current_cpu, int rn, unsigned char *buf,
			  int len)
{
  if (rn < 32)
    SETTSI (buf, or1k32bef_h_gr_get (current_cpu, rn));
  else
    return 0;
  return -1;
}

/* The contents of BUF are in target byte order.  */

int
or1k32bef_store_register (SIM_CPU * current_cpu, int rn, unsigned char *buf,
			  int len)
{
  if (rn < 32)
    or1k32bef_h_gr_set (current_cpu, rn, GETTSI (buf));
  else
    return 0;
  return -1;
}

void
or1k32bef_h_spr_set_handler (SIM_CPU * current_cpu, int rn, SI newval)
{
  /*printf("\nor1k32bef_h_spr_set_handler, %d = %x\n", rn, newval);*/
  /* Check which registers we're trying to write to */
  switch (rn)
    {
    case SPR_SR :
    case SPR_EPCR_BASE :
    case SPR_EEAR_BASE :
    case SPR_ESR_BASE  :
      CPU (h_spr[rn]) = newval;
    }

  if (rn >= SPR_GPR_BASE && rn < SPR_GPR_BASE + 32)
    /* This is a GPR access */
    or1k32bef_h_gr_set (current_cpu, (rn - SPR_GPR_BASE), newval);

  return;
}

SI
or1k32bef_h_spr_get_handler (SIM_CPU * current_cpu, int rn)
{
  /*printf("\nor1k32bef_h_spr_get_handler: reg: %d\n", rn);*/
  
  SI spr_val = CPU (h_spr[rn]); //CPU_SPR(current_cpu, rn);
  SIM_DESC sd = CPU_STATE (current_cpu);
  PCADDR pc = GET_H_PC();

  if (rn >= SPR_GPR_BASE && rn < SPR_GPR_BASE + 32)
    /* This is a GPR access */
    return or1k32bef_h_gr_get (current_cpu, (rn - SPR_GPR_BASE));

  switch (rn)
    {
    case SPR_VR:
      /* TODO: return some value appropriate for this simulator */
      spr_val = 0;
      break;
    case SPR_UPR:
      spr_val = SPR_UPR_UP; /* UPR Present, keep rest blank, we have no other parts */
      break;
    case SPR_CPUCFGR   :
      spr_val = SPR_CPUCFGR_OB32S; /* Only support ORBIS32 */
      break;
    case SPR_NPC       :
      spr_val = GET_H_PC()+4;
      break;
    case SPR_SR	       :
      spr_val &= ~SPR_SR_RES; /* clear all reserved bits */
      spr_val &= ~SPR_SR_LEE; /* Little endian never enabled */
      /* add what we need to, and mask out what we don't want, from SR */
      spr_val |= SPR_SR_FO; /* Fixed one */
      if (GET_H_CBIT()) /* set/clear flag bit in SR */
	spr_val |= SPR_SR_F;
      else
	spr_val &= ~SPR_SR_F;
      break;
    case SPR_PPC       :
      spr_val = GET_H_PC();
      break;

    case SPR_EPCR_BASE :
    case SPR_EEAR_BASE :
    case SPR_ESR_BASE  :
    case SPR_GPR_BASE  :
      break; /* allow these to keep their values */
    default:
      spr_val = 0; /* all others should read as 0 */
      break;
    }
  return spr_val;
}


#if WITH_PROFILE_MODEL_P

/* Initialize cycle counting for an insn.
   FIRST_P is non-zero if this is the first insn in a set of parallel
   insns.  */

void
or1k32bef_model_insn_before (SIM_CPU * cpu, int first_p)
{
}

/* Record the cycles computed for an insn.
   LAST_P is non-zero if this is the last insn in a set of parallel insns,
   and we update the total cycle count.
   CYCLES is the cycle count of the insn.  */

void
or1k32bef_model_insn_after (SIM_CPU * cpu, int last_p, int cycles)
{
}

int
or1k32bef_model_or1200_u_exec (SIM_CPU * cpu, const IDESC * idesc,
			  int unit_num, int referenced)
{
  return idesc->timing->units[unit_num].done;
}

#endif /* WITH_PROFILE_MODEL_P */

/* l.nop handler */
void
or1k32bef_nop_handler (SIM_CPU * current_cpu, unsigned short imm)
{
  SIM_DESC sd = CPU_STATE (current_cpu);
  PCADDR pc = GET_H_PC();
  /*printf("\nl.nop: %d\n" ,imm);*/
  if (imm == 1)
    {
      /* finish and exit. return RC from simulated software */
      
      sim_engine_halt (sd, current_cpu, NULL, pc, sim_exited, /*SIM_SIGNONE*/
		       or1k32bef_h_gr_get (current_cpu, 3));
    }
  if (imm == 2)
    {
      printf("report: 0x%08x\n", or1k32bef_h_gr_get (current_cpu, 3));

    }
  if (imm == 4)
    {
      /* putc of char in gpr3 */
      SI gpr3 = or1k32bef_h_gr_get (current_cpu, 3);
      printf("%c", (char) (gpr3&0xff));
    }
    /* report value in r3 */
    
  
  
}
