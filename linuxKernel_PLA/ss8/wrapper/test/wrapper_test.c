#include <stdio.h>
#include <pthread.h>
#include "wrapper_function_file.h" 

	char at[100]="";
	char *stChar;
pthread_t th1 , th2;
void *test(void *st)
{
	char *s = (char *)st;	
	write_file(s, 100);
	return (void*)NULL;
}

void *test2(void *st)
{
	char *s = (char *)st;	
	read_file(s, 100);	
	return (void*)NULL;
}

int main()
{
	open_file_for_write();
	pthread_create(&th1 , NULL , test , "VHL thread 1 VHL thread 1 VHL thread 1\n");
	pthread_create(&th2 , NULL , test , "VHL thread 2 VHL thread 2 VHL thread 2\n");


	pthread_join(th1 , NULL);
	pthread_join(th2 , NULL);
	destroy_wrapper();
	
	open_file_for_read();
	pthread_create(&th1 , NULL , test2 , at); //thread not save pointer
	pthread_create(&th2 , NULL , test2 , at); //thread not save pointer
		
	pthread_join(th1 , NULL);
	pthread_join(th2 , NULL);
	pthread_mutex_destroy(&lock);
	destroy_wrapper();
}
