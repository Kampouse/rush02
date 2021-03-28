#ifndef RUSH02_H
# define RUSH02_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>










#define LENGHT 40

#define HEIGHT 42
typedef struct		holder
{
	char			number[LENGHT];
	char			assci[LENGHT];
	struct holder	*next;
}					t_dict;

typedef struct sweeper{
		char number[LENGHT];
		char string[LENGHT];
		int location;
		
}sweeper;




int hash_table_insert(struct holder *p);

unsigned int hash(char *value);


struct sweeper ft_strft(char *string ,struct sweeper *value);

void print_table(void);

void init_hash_table(void);

int	ft_strncmp(char *str1, char *str2, unsigned int n);










#endif
