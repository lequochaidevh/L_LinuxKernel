description:
	3 programs run parallel to check background , foreground process

how to run ?
	1. "make all"
	2. open terminal run :  ./A | ./B | ./C &    	//[1] 15096 id of C.c  15094 [1]+  Done +./A | ./B | ./C
	3. open terminal run :  ./A | ./B | ./C 	//id of C.c  15094

	4. open terminal run :  ./A & ./B & ./C &	//id of A.c  16150  id of B.c  16151  id of C.c  16152
