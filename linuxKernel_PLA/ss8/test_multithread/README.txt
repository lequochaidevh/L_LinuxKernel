RUN:
	gcc -pthread -o t test_multithread.c
In general, libraries should follow sources and objects on command line, and -lpthread is not an option, it's a library specification. On a system with only libpthread.a installed,

gcc -lpthread ...

will fail to link.
