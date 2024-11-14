description:
	using fork()
	both A, B process write to a file 
	update counter at end of file when write
	using signal to synchronized
	

Program A fork to B. Both write to a ONLY file. Each program will read the counter variable in end of line and inrease it to 1 unit. After, write to new line is a processID it-seft and new value of counter variable. Use signal to synchronized 2 process.
	

how to run ?
	1. make 
	2. ./t
