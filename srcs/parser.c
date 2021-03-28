#include "fcntl.h"
#include "unistd.h"
#include "stdlib.h"
#include "stdio.h"
#include "rush02.h"
#define BUFFER 4096



int main(void)
{
	char *buffer;
	int		size;
	int 	file_size;
	file_size = 0;
	size = BUFFER;

buffer = (char *)malloc(sizeof(char) * file_size + 1);
struct sweeper john = {.number="100",.string = "hundred",.location = 0};


init_hash_table();
int file = open("dictonary/defautlt.dict",O_RDONLY);

while(size  == BUFFER)
{
file_size += read(file,buffer,BUFFER);
size = read(file,buffer,BUFFER);
}
john = ft_strft(buffer,&john);
printf("%s",buffer);
printf("%dshere",john.location);
}
