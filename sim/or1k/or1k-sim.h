/* collection of junk waiting time to sort out
   Copyright (C) 1996, 1997, 1998, 2003, 2007, 2008, 2009, 2010
   Free Software Foundation, Inc.
   Contributed by Cygnus Support.
   Modified by Julius Baxter <juliusbaxter@gmail.com>

   This file is part of GDB, the GNU debugger.

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

#ifndef OR1K_SIM_H
#define OR1K_SIM_H

#ifndef GET_H_SPR
extern USI  or1k_h_spr_get_handler (SIM_CPU *, UINT);
extern void or1k_h_spr_set_handler (SIM_CPU *, UINT, USI);

#define GET_H_SPR(regno) \
  XCONCAT2 (or1k_h_spr_get_handler) (current_cpu, (regno))
#define SET_H_SPR(regno, val) \
  XCONCAT2 (or1k_h_spr_set_handler) (current_cpu, (regno), (val))
#endif


/* Misc. profile data.  */

typedef struct {
  /* Working area for computing cycle counts.  */
  unsigned long insn_cycles;
} OR1K_MISC_PROFILE;

/* Initialize the working area.  */
void or1k_init_insn_cycles (SIM_CPU *, int);
/* Update the totals for the insn.  */
void or1k_record_insn_cycles (SIM_CPU *, int);


#define GETTWI GETTSI
#define SETTWI SETTSI

/* Additional execution support.  */


/* Hardware/device support.
   ??? Will eventually want to move device stuff to config files.  */

/* Exception, Interrupt, and Trap addresses */
#define OR1K_EXCEPT_RESET_ADDR   0x100
#define OR1K_EXCEPT_BUS_ADDR     0x100
#define OR1K_EXCEPT_DPF_ADDR     0x300
#define OR1K_EXCEPT_IPF_ADDR     0x400
#define OR1K_EXCEPT_TICK_ADDR    0x500
#define OR1K_EXCEPT_ALIGN_ADDR   0x600
#define OR1K_EXCEPT_INT_ADDR     0x800
#define OR1K_EXCEPT_DTLB_ADDR    0x900
#define OR1K_EXCEPT_ITLB_ADDR    0xa00
#define OR1K_EXCEPT_RANGE_ADDR   0xb00
#define OR1K_EXCEPT_SYSCALL_ADDR 0xc00
#define OR1K_EXCEPT_FLOAT_ADDR   0xd00
#define OR1K_EXCEPT_TRAP_ADDR    0xe00

/* sim_core_attach device argument.  */
extern device or1k_devices;

/* FIXME: Temporary, until device support ready.  */
struct _device { int foo; };

/* Handle the trap insn.  */
USI or1k_trap (SIM_CPU *, PCADDR, int);

#endif /* OR1K_SIM_H */
