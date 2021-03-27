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

char *ft_strdup(char *src)
{
	char	*copy;
	size_t	size;
	int	i;

	i = 0  ;
	size = ft_strlen(src);
	copy = (char *)malloc(size + 1);
		while(src[i])
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';

return copy;

}

int main(void)
{
char *buffer;
int size;
int file_size;
char **nodumbray;
file_size = 0;
size = BUFFER;
buffer = (char *)malloc(sizeof(char) * 700);
int file = open("only.txt",O_RDONLY);
nodumbray = (char **)malloc(sizeof(char) * ft_strlen(buffer));
while(size  == BUFFER)
{
file_size += read(file,buffer,BUFFER);
size = read(file,buffer,BUFFER);
}

buffer = (char *)malloc(sizeof(char) * file_size + 1);
}
