#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	sleep(1);
	printf("id of C.c  %lld\n" ,(long long) getpgid(0));
	return 0;
}
