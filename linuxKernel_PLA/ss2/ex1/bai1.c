#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>


int main(int argc , char * argv[]){
	char *buffer;
	int fd;
	printf("program read a file at any point from SEEK_SET=0 , SEEK_CUR=1 , SEEK_END=2\n");
	if( argc != 4){
		perror("incorrect syntax\n");
		return -1;
	}

	buffer = (char *) malloc(1);
	if( (fd = open(argv[1] , O_RDONLY )) )
	{
		lseek(fd, atoi(argv[2]), atoi(argv[3]));
		//read(fd,buffer,11);
		//write(1,buffer,11);
		//puts(buffer);
		//printf("\n");
		while(read(fd, buffer,2220))
			puts(buffer);
	}
	free(buffer);
	close(fd);
	return 0;
}
