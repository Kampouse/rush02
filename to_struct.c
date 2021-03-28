/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 11:57:25 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/28 13:09:11 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"



int	ft_str_is_alpha (char *str)
{
		if (! (*str >= 'a' && *str <= 'z'))
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

char	*ft_strncpy(char *target)
{
	int number;
	int letters;
	letters = 0;
	number = 0;
	while(*target != '\0')
	{
		 letters += ft_str_is_alpha(target);
		 number+= ft_str_is_numeric(target);
			 target++;
	}
printf("%d,%d",number,letters);
return target;
}



int main(void)
{

char *string ="3233333 aaaaaaaa";
ft_strncpy(string);

}
