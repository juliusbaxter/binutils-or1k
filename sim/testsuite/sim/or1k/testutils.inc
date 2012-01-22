# r1,r3 are used as tmps, consider them call clobbered by these macros.

	.macro start
	.data
failmsg:
	.ascii "fail\n"
passmsg:
	.ascii "pass\n"
	.text
	.org 0
	.global _start
_start:
	.endm

	
	.macro exit rc
	l.ori  r3,r0,\rc
	l.nop  1
	.endm

	.macro pass
	l.movhi	r1,hi(passmsg)
	l.ori	r1,r0,lo(passmsg)
	l.lbz	r3,0(r1)
	l.nop	4
	l.lbz	r3,1(r1)
	l.nop	4
	l.lbz	r3,2(r1)
	l.nop	4
	l.lbz	r3,3(r1)
	l.nop	4
	l.lbz	r3,4(r1)
	l.nop	4
	exit 0
	.endm

	.macro fail
	l.movhi	r1,hi(failmsg)
	l.ori	r1,r0,lo(failmsg)
	l.lbz	r3,0(r1)
	l.nop	4
	l.lbz	r3,1(r1)
	l.nop	4
	l.lbz	r3,2(r1)
	l.nop	4
	l.lbz	r3,3(r1)
	l.nop	4
	l.lbz	r3,4(r1)
	l.nop	4
	exit 1
	.endm

	.macro mvi_h_gr reg, val
	.if (\val >= -32768) && (\val <= 32767)
	l.ori	  \reg,r0,\val
	.else
	l.movhi	\reg,hi(\val)
	l.ori	\reg,\reg,lo(\val)
	.endif
	.endm

	.macro mvaddr_h_gr reg, addr
	l.movhi \reg,hi(\addr)
	l.ori	\reg,\reg,lo(\addr)
	.endm

# Other macros know this only clobbers r1.
	.macro test_h_gr reg, val
	mvaddr_h_gr r1, \val
	l.sfeq \reg,r1
	l.bf   test_gr\@
	l.nop
	fail
test_gr\@:
	.endm

	.macro mvi_h_condbit val
	.if \val
	l.sfeqi	r0, 0
	.else
	l.sfeqi	r0, 1
	.endif
	.endm

	.macro test_h_condbit val
	.if \val
	l.bf test_c1\@
	l.nop
	fail
test_c1\@:
	.else
	l.bnf test_c0\@
	l.nop
	fail
test_c0\@:
	.endif
	.endm
