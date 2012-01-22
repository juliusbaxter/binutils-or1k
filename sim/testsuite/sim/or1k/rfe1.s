/* test rfe with return from syscall */
# mach(): all
# ld(): -e 0
	
	.include "testutils.inc"

        start

	l.movhi	r0, 0
	l.sys	0
	pass

	.org 	0xc00
	l.mfspr	r3,r0,32	/* get epcr */
#	l.nop	2
	l.addi	r3,r3,4		/* step over l.sys instruction */
#	l.nop	2
	l.mtspr	r0,r3,32	/* save epcr */
	l.rfe
	fail
