/* test syscall */
# mach(): all
	.include "testutils.inc"

        start

	l.movhi	r0, 0
	l.sys	0
	fail

	.org 0xc00
	pass

	
