/*set flag insn check */
# mach(): all
	.include "testutils.inc"

        start

	l.movhi	r0, 0
	l.movhi	r1, 0

	l.sfne	r0, r1	/* should set flag */

	test_h_condbit	0
	pass
