/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 11:57:25 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/28 12:25:22 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"



				
int	ft_str_is_numeric (char *str)
{
		if (*str >='0' && *str <= '9')
			return (1);
		else 
			return 0;		
	return (0);
}
char *number_find(char *input)
{
char *output;
char *tmp;
output = input;
tmp = output;
	while(*input != '\0')
	{

		if(ft_str_is_numeric(input))
		{
			*output = *input;	
			output++;
		}
input++;
}
return tmp;
}


int main(void)
{

char *string ="3222222: three";
number_find(string);

}
