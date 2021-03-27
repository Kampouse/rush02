#include "fcntl.h"
#include "unistd.h"
#include "stdlib.h"
#include "stdio.h"

#define BUFFER 4096

int	ft_str_is_alpha (char *str)
{
		if (*str >= 'a' && *str <= 'z')
			return (1);

		return (0);
}

int	ft_strlen(char *str)
{
	char	*start;
	int		i;

	start = str;
	i = 0;
	while (*start != '\0')
	{
		start++;
		i++;
	}
	return (i);
}


char  *find_end(char *str,char *cat)
{
int i;
i = 0;
while(*str != '\0')
{

if (*str >= 'a' && *str <= 'z')
{
*cat= *str;
cat++;
}
str++;

}
printf("%s",cat);
return str;
}
int	ft_strlenV2(char *str)
{
	int		lenght;
	char	*string_ln;

	string_ln = str;
	lenght = 0;
	while (*string_ln != '\0')
	{
	lenght += ft_str_is_alpha(string_ln);
		string_ln++;
	}	
	return (lenght);
}
int main(void)
{
	char *buffer;
	int		size;
	int 	file_size;
	char 	*nodumbray;
	char	dumb[20];
	file_size = 0;
	size = BUFFER;

buffer = (char *)malloc(sizeof(char) * file_size + 1);

int file = open("only.txt",O_RDONLY);
nodumbray = (char *)malloc(sizeof(char) * ft_strlenV2(buffer) + 1);
while(size  == BUFFER)
{
file_size += read(file,buffer,BUFFER);
size = read(file,buffer,BUFFER);
}
nodumbray = find_end(buffer,dumb);
}
