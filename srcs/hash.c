#include "unistd.h"
#include  "stdlib.h"
#include  "stdio.h"
#include "rush02.h"

#define LENGHT 40
#define HEIGHT 42

struct holder * hash_table[HEIGHT];

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	while (n > 0 && *str1 != '\0' && *str2 != '\0')
	{
		if (*str1 != *str2)
			return (*(unsigned char *)str1 - *(unsigned char *) str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}

void init_hash_table()
{
	int i;
	i = 0;
	while(i < LENGHT)
	{
		hash_table[i] = NULL;
		i++;
	}

}

	unsigned int hash(char *value)
{
	unsigned int output;
	output = 0;
	while(*value)
	{
		output += *value;
		output = ((output * *value) + 42 ) % LENGHT;
		value++;
	}
	return output;
}
	void print_table()
{
	int i;
	i = 0;
	while(i <= LENGHT)
	{
		if (hash_table[i] == NULL)
		{
		printf("\t%i\t-----\n",i);	
		}
		else {
				struct holder  *tmp= hash_table[i];
		while(tmp != NULL)
		{
			printf("\t%i\t%s\n",i, hash_table[i] -> assci);	
			tmp = tmp -> next;
		}
		}
		i++;
	}
}
	int hash_table_insert(struct holder *p) 
	{
	if (p == NULL) 
		return (0);
	int index = hash(p->number);
	p->next = hash_table[index];
	hash_table[index]= p;
	if (hash_table[index] != NULL)
		return (0); //to eddit;
	return (1);
}
struct holder *hash_find(char *number)
{
unsigned int index = hash(number);
	struct holder  *tmp = hash_table[index];
	while(tmp != NULL && ft_strncmp(tmp->number,number,LENGHT)!= 0)
	{
		tmp = tmp->next;	
	}
	return tmp;
	if (hash_table[index] != NULL &&
	ft_strncmp(hash_table[index] -> number,number,LENGHT) == 0)
	return hash_table[index];
	else
		return NULL;
}

/*int main(void)
{
struct holder john = {.number="100",.ascci = "hundred"};

init_hash_table();
hash_table_insert(&john);
struct holder *tmp = hash_find("100");
printf("%shere",tmp->ascci);
print_table();
printf("%u\n",hash("10"));
printf("%u\n",hash("1"));
printf("%u\n",hash("2"));
printf("%u\n",hash("3"));
printf("%u\n",hash("4"));
printf("%u\n",hash("5"));
printf("%u\n",hash("6"));


} */
