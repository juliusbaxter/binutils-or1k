/*set flag insn check */
# mach(): all
	.include "testutils.inc"

        start

	l.movhi	r0, 0

	l.sfeqi	r0, 0	/* should set flag */

	test_h_condbit	1
	pass
