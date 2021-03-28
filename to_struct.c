/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 11:57:25 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/28 14:13:55 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"



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

int ft_strft(int number,int str,char *string)
{
char *copyNumber;
char *copyStr;


copyNumber  = (char *)malloc(number+ 1);
copyStr = (char *)malloc(str+ 1);


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
	
return number;
}


int main(void)
{

char *string ="3233333 ;;;;; aaaaaaaa";
ft_strlenghts(string);

}
