/* OR1K exception support.
   Contributed by Jon Beniston <jon@beniston.com>
   Modified by Julius Baxter <juliusbaxter@gmail.com>

   Copyright (C) 2009, 2010, 2011 Free Software Foundation, Inc.

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
#include "or1k-sim.h"
#include "targ-vals.h"

#include "spr-defs.h"

/* Handle invalid instructions.  */

SEM_PC
sim_engine_invalid_insn (SIM_CPU * current_cpu, IADDR cia, SEM_PC pc)
{
  /* can't for the life of me get a new PC take here (to go to illegal 
     instruction vector 0x700, so just bail out for now */
#if 0
  printf("\nsim_engine_invalid_insn\n");
  /* save EEAR */
  CPU (h_spr[SPR_EEAR_BASE]) = cia;
  SI newpc = or1k_cpu_exception_entry (current_cpu, 0x7, cia);
  SET_H_PC(newpc);
  
#else

  SIM_DESC sd = CPU_STATE (current_cpu);
  
  sim_engine_halt (sd, current_cpu, NULL, cia, sim_stopped, SIM_SIGILL);
#endif

  return pc;
}

SI
or1k_cpu_exception_entry (SIM_CPU * current_cpu, int type, IADDR pc)
{
  /* Set EPC, ESR */
  CPU (h_spr[SPR_EPCR_BASE]) = pc; /* TODO - determine if we're in a 
				      delay slot! */
  CPU (h_spr[SPR_ESR_BASE]) = CPU (h_spr[SPR_SR]);
  /* TODO - if bus error or alignment error, store address we tried to access 
     in EEAR */
  
  /* SR now has exception-entry-value */
  /* All exceptions set a new SR where both MMUs are disabled (address 
     translation disabled), supervisor mode is turned on, and tick timer 
     exceptions and interrupts are disabled. (SR[DME]=0, SR[IME]=0, SR[SM]=1, 
     SR[IEE]=0 and SR[TEE]=0). */
  CPU (h_spr[SPR_SR]) &= ~(SPR_SR_TEE | SPR_SR_IEE | SPR_SR_DME | SPR_SR_IME);
  CPU (h_spr[SPR_SR]) |= SPR_SR_SM;

  SI exception_base = (CPU (h_spr[SPR_SR]) & SPR_SR_EPH) ? 0xf0000000 : 0x0;
  return (SI) (exception_base | (type << 8 ));
  
}

/* Handle signals.  */

void
or1k_core_signal (SIM_DESC sd,
		  sim_cpu * current_cpu,
		  sim_cia cia,
		  unsigned map,
		  int nr_bytes,
		  address_word addr,
		  transfer_type transfer, sim_core_signals sig)
{

  sim_core_signal (sd, current_cpu, cia, map, nr_bytes, addr,
		   transfer, sig);

  /* TODO: Alignment error exception handling */

}
