/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 11:57:25 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/28 18:16:26 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"
#include "rush02.h"

#define LENGHT 40

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

int	ft_strlen(char *str)
{
	int		lenght;
	char	*string_ln;

	string_ln = str;
	lenght = 0;
	while (*string_ln != '\0' && *string_ln != '\n')
	{
		lenght++;
		string_ln++;
	}	
	return (lenght);
}
struct sweeper ft_strft(char *string ,struct sweeper *value)
{
int		i;
	i = 0;

value->location = ft_strlen(string) + 2;
//might cause problem.. ether one or two
while(*string != '\n'  && *string != '\0')
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
return(*value);
}

/* int main(void)
{
struct sweeper john = {.number="100",.string= "john",.location = 0};
char *string ="f";
 john = ft_strft(string,&john);

printf("%dshere",john.location);
}  */
