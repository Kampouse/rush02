#ifndef RUSH02_H
# define RUSH02_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>










#define LENGHT 40

#define HEIGHT 42
typedef struct		holder
{
	char			*key;
	char			*value;
	struct s_dict	*next;
}					t_dict;

	typedef struct sweeper{
		char number[LENGHT];
		char string[LENGHT];
		int location;
		
} sweeper;



















#endif
