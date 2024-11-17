
hello: wrapper_function_file.o wrapper_test.o
	gcc -o $@ wrapper_test.o wrapper_function_file.o -I. -pthread	

all:
	gcc wrapper_function_file.c  wrapper_function_file.h wrapper_test.c -o t -pthread
clean:
	rm -f t
