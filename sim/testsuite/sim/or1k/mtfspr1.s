/* Write value to EPCR, read it back */
# mach(): all
	.include "testutils.inc"

        start

	mvi_h_gr r4, 0xabcdef01
	l.mtspr r0,r4,32 /* EPCR0, should be fully writable and readable */
	l.mfspr r5,r0,32
	test_h_gr r5, 0xabcdef01
	pass
	
