/*set flag insn check */
# mach(): all
	.include "testutils.inc"

        start

	l.movhi	r0, 0

	l.sfeqi	r0, -1	/* should set flag */

	test_h_condbit	0
	pass
