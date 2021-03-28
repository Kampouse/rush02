/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 11:57:25 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/28 12:58:47 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"



int	ft_str_is_alpha (char *str)
{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
	return (1);
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
	number = 0;
	while(*target != '\0')
	{
		 number += ft_str_is_alpha(target);

			 target++;
	}
printf("%d",number);
return target;
}



int main(void)
{

char *string ="32  ; ;";
ft_strncpy(string);

}
