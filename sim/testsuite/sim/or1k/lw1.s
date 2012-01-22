/* load word (sign and zero-extended should be identical) test */
# mach(): all
	.include "testutils.inc"

	start
	l.movhi	r0, 0
	l.ori	r4,r0,0x1000
	l.lwz	r3,0(r4)
#	l.nop	2
	test_h_gr r3, 0xaabbccdd

	pass

	.org 	0x1000
	.word	0xaabbccdd
