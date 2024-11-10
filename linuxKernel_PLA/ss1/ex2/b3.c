#include <stdio.h>

#include <stdlib.h>

#include <string.h>

void main(int argc  , char *argv[]){

	FILE *fp ;
	char buf[254], namepro[254];
	int pid ;

	if ( argc == 2)
	{
	    if(	pid = atoi(argv[1]))
		{
			sprintf(buf, "/proc/%d/cmdline",pid);
			if( fp = fopen(buf , "r"))
			{
				fgets(namepro , 254 , fp)!=NULL ? puts(namepro) : printf("Err get file");
			}
			else
				printf("don't have %d\n " , pid);

			 fclose(fp);
		}

	}
	else {
		puts("error syntax ");
	}



}
