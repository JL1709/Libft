/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 14:03:02 by julian            #+#    #+#             */
/*   Updated: 2021/06/22 11:34:11 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
** The memcmp() function compares the first n bytes (each interpreted 
** as unsigned char) of the memory areas s1 and s2.
**return value:
** an integer less than, equal to, or greater than zero if the first n bytes 
** of s1 is found,respectively, to be less than, to match, or be greater than
** the first n bytes of s2.
** For a nonzero return value, the sign is determined by the sign of the 
** difference between the first pair of bytes (interpreted as unsigned char) 
** that differ in s1 and s2. If n is zero, the return value is zero.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cache_s1;
	unsigned char	*cache_s2;
	int				i;

	cache_s1 = (unsigned char *)s1;
	cache_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (n-- && cache_s1[i] == cache_s2[i])
		i++;
	return (cache_s1[i] - cache_s2[i]);
}
