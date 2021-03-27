#include "fcntl.h"
#include "unistd.h"
#include "stdlib.h"


#define BUFFER 4096
int main(void)
{
char buffer[BUFFER];
char *iter;
int file = open("only.txt",O_RDONLY);
	//should make mover go aroud file until the end?
	read(file,buffer,BUFFER);
	iter = buffer;
	write(1,iter,25);
}
