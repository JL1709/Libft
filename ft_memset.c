/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 18:05:33 by julian            #+#    #+#             */
/*   Updated: 2021/06/22 11:39:54 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
** The memset() function fills the first n bytes
** of the memory area pointed to by s with the constant byte c. 
** Parameters:
** s - pointer to the destination object
** c - value to be filled (converted to an unsigned char)
** n - number of bytes to be filled starting from s to be filled
** return value: the value of s
**
** It doesn't make sense to dereference a void pointer. 
** How will the compiler interpret the memory that the pointer is pointing to? 
** You need to cast the pointer to a proper type first.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*new;

	new = s;
	while (n--)
		*new++ = c;
	return (s);
}
