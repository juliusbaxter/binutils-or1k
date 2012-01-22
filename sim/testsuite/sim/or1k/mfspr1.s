# mach(): all
	.include "testutils.inc"

        start

	l.mfspr r4,r0,17	/* fish out SPR after reset */
	test_h_gr r4, 0x8001	/* Reset value is with FO and SM set */
	pass
	
