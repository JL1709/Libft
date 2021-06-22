/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 13:21:45 by julian            #+#    #+#             */
/*   Updated: 2021/06/22 11:35:48 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
** The memcpy() function copies n bytes from memory area src to memory 
** area dest. The memory areas must not overlap.  
** Use memmove(3) if the memory areas do overlap.
** return value: a pointer to dest.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*cache_dest;
	const unsigned char	*cache_src;

	cache_dest = dest;
	cache_src = src;
	while (n--)
		*cache_dest++ = *cache_src++;
	*cache_dest = '\0';
	return (dest);
}
