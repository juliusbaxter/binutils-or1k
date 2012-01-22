/* test trap instruction */
# mach(): all
	.include "testutils.inc"

        start

	l.movhi	r0, 0
	l.trap	0
	fail

	.org 0xe00
	pass

	
