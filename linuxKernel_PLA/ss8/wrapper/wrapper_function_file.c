#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include "wrapper_function_file.h"

int open_file_for_write()
{
	pthread_mutex_lock(&lock);//insert
	if((fp = fopen(name_file , "w+")) == NULL )
	{
		return -1;
	}
	pthread_mutex_unlock(&lock);
	return 0;
}

int open_file_for_read()
{
	pthread_mutex_lock(&lock);//insert
	if((fp = fopen(name_file , "r")) == NULL )
	{
		return -1;
	}
	pthread_mutex_unlock(&lock);
	return 0;
}

int read_file(char *buffer , int nsize )
{	
	pthread_mutex_lock(&lock);
	char c ; char* start = buffer;
	while(  (  nsize-- ) && ( (c = fgetc(fp)) != EOF))
	{
		
		*buffer = c;
		buffer ++;
	}
	*buffer = '\0';
	buffer = start;
	pthread_mutex_unlock(&lock);		
	puts(buffer);// need fork to print
	return 1;
}
int write_file(char *buffer , int nsize)
{
	pthread_mutex_lock(&lock);
	int nsi = strlen(buffer);
	while(nsi --)
	{
		fputc(*buffer , fp);
		buffer ++;
	}
	
	pthread_mutex_unlock(&lock);
	return 0;
}
int destroy_wrapper()
{
	fclose(fp);
	//pthread_mutex_destroy(&lock);
	return 0;
}





