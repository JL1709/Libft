/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 14:40:52 by jludt             #+#    #+#             */
/*   Updated: 2021/06/24 18:12:02 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a string
** representing the integer received as an argument.
** Negative numbers must be handled.
** parameters:
** n - the integer to convert.
** return value:
** The string representing the integer. NULL if the
** allocation fails.
*/

// char	*get_number(int n, int len, char *dest)
// {
// 	if (n >= 0)
// 	{
// 		dest[len] = '\0';
// 		len--;
// 		while (len)
// 		{
// 			dest[len--] = '0' + n % 10;
// 			n = n / 10;
// 		}
// 		dest[len] = '0' + n % 10;
// 	}
// 	else
// 	{
// 		n = n * (-1);
// 		len++;
// 		dest[len] = '\0';
// 		len--;
// 		while (len)
// 		{
// 			dest[len--] = '0' + n % 10;
// 			n = n / 10;
// 		}
// 		dest[len] = '-';
// 	}
// 	return (dest);
// }





char	*ft_itoa(int n)
{
	int		number;
	int		len_n;
	char	*s_int;
	int		i;
	int		sign;

	//if (n == 0)
	//	return ("0");
	sign = 1;
	if (n < 0)
		sign = -1;
	number = n;
	len_n = 0;
	if (n == 0)
		len_n = 1;
	while (number != 0)
	{
		number = number / 10;
		len_n++;
	}
	if (n >= 0)
		s_int = malloc(sizeof(char) * len_n + 1);
	else
		s_int = malloc(sizeof(char) * len_n + 2);
	if (s_int == NULL)
		return (NULL);
	//s_int = get_number(n, len_n, s_int);
	i = 0;
	if (sign == -1)
		n = n * (-1);
	while (len_n--)
	{
		s_int[i++] = '0' + n % 10;
		n = n / 10;
	}
	if (sign == -1)
		s_int[i++] = '-';
	s_int[i] = '\0';
	return (s_int);
}
