/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 11:57:25 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/28 15:52:15 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"

#define LENGHT 40

	typedef struct elems{
		char number[LENGHT];
		char string[LENGHT];
		char *location;
		
}elemes;

int	ft_str_is_alpha (char *str)
{
		if (*str >= 'a' &&  *str <= 'z')

			return (1);
	return (0);
}

int	ft_str_is_numeric (char *str)
{
		if (*str >='0' && *str <= '9')
			return (1);
		else 
			return 0;		
	return (0);
}

struct elems ft_strft(char *string ,struct elems *value)
{
int i;
i = 0;
while(*string != '\n')
{
if(ft_str_is_numeric(string))
	value->string[i] = *string;
if(ft_str_is_alpha(string))
	value->number[i] = *string;
i++;
string++;
}
value->string[i] = '\0';
value->number[i] = '\0';
value->location = string;
return(*value);
}

int *ft_strlenghts(char *target)
{
	int number[2];
	while(*target != '\0')
	{
		 number[0] += ft_str_is_alpha(target);
		 number[1] += ft_str_is_numeric(target);
		target++;
	}
	
return 0;
}


int main(void)
{

struct elems john = {.number="100",.string= "hundred",.location = NULL};
char *string ="3233333 ;;;;; \n aaaaaaaa";
 john = ft_strft(string,&john);

printf("%shere",john.number);
}
