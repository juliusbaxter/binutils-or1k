/* Main header for or1k.  */

#ifndef SIM_MAIN_H
#define SIM_MAIN_H

#define USING_SIM_BASE_H /* FIXME: quick hack */

struct _sim_cpu; /* FIXME: should be in sim-basics.h */
typedef struct _sim_cpu SIM_CPU;

#include "symcat.h"
#include "sim-basics.h"
#include "cgen-types.h"
#include "or1k-desc.h"
#include "or1k-opc.h"
#include "arch.h"

/* These must be defined before sim-base.h.  */
typedef USI sim_cia;

#define CIA_GET(cpu)     CPU_PC_GET (cpu)
#define CIA_SET(cpu,val) CPU_PC_SET ((cpu), (val))

#define SIM_ENGINE_HALT_HOOK(sd, cpu, cia) \
do { \
  if (cpu) /* null if ctrl-c */ \
    sim_pc_set ((cpu), (cia)); \
} while (0)
#define SIM_ENGINE_RESTART_HOOK(sd, cpu, cia) \
do { \
  sim_pc_set ((cpu), (cia)); \
} while (0)

#include "sim-base.h"
#include "cgen-sim.h"
#include "or1k-sim.h"
#include "opcode/cgen.h"

/* The _sim_cpu struct.  */

struct _sim_cpu {
  /* sim/common cpu base.  */
  sim_cpu_base base;

  /* Static parts of cgen.  */
  CGEN_CPU cgen_cpu;

  OR1K_MISC_PROFILE or1k_misc_profile;
#define CPU_OR1K_MISC_PROFILE(cpu) (& (cpu)->or1k_misc_profile)

  /* CPU specific parts go here.
     Note that in files that don't need to access these pieces WANT_CPU_FOO
     won't be defined and thus these parts won't appear.  This is ok in the
     sense that things work.  It is a source of bugs though.
     One has to of course be careful to not take the size of this
     struct and no structure members accessed in non-cpu specific files can
     go after here.  Oh for a better language.  */
#if defined (WANT_CPU_OR1K32BEF)
  OR1K32BEF_CPU_DATA cpu_data;
#endif
};

/* The sim_state struct.  */

struct sim_state {
  sim_cpu *cpu;
#define STATE_CPU(sd, n) (/*&*/ (sd)->cpu)

  CGEN_STATE cgen_state;

  sim_state_base base;
};

/* Misc.  */

/* Catch address exceptions.  */
extern SIM_CORE_SIGNAL_FN or1k_core_signal;
#define SIM_CORE_SIGNAL(SD,CPU,CIA,MAP,NR_BYTES,ADDR,TRANSFER,ERROR) \
or1k_core_signal ((SD), (CPU), (CIA), (MAP), (NR_BYTES), (ADDR), \
		  (TRANSFER), (ERROR))

/* Default memory size.  */
#ifdef OR1K_LINUX
#define OR1K_DEFAULT_MEM_SIZE 0x2000000 /* 32M */
#else
#define OR1K_DEFAULT_MEM_SIZE 0x800000 /* 8M */
#endif

#endif /* SIM_MAIN_H */
