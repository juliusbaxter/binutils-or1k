/* test a loop like a bss clearing loop */
# mach(): all
	.include "testutils.inc"

	start
	l.movhi	r0,0
	l.ori	r2,r0,7
	l.ori	r3,r0,0x1000
	l.movhi	r4, 0
loop:
	l.sw	0(r3),r0
#	l.nop	2
	l.addi	r4,r4,1		
	l.sfltu	r4,r2
	l.bf	loop
	l.addi	r3,r3,4	


done:
	test_h_gr r3, 0x101c
	pass
	
