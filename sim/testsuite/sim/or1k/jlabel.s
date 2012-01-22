/* jump to the label */
# mach(): all

	.include "testutils.inc"

        start

	l.j	thelabel
	l.nop	0
	l.nop	2
	l.nop	3
	l.nop	4
	l.nop	5
	l.nop	6
	l.nop	7
	l.nop	8
	l.nop	9
	fail
thelabel:
	pass

	l.nop	10
	l.nop	11
	l.nop	12
	l.nop	13
	l.nop	14
	l.nop	15
	l.nop	16
	l.nop	17
	l.nop	18
	l.nop	19
	l.nop	20
	l.nop	21
	l.nop	22
	l.nop	23
	l.nop	24
	l.nop	25
	l.nop	26
	l.nop	27
	l.nop	28
	fail
	
