/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 13:21:45 by julian            #+#    #+#             */
/*   Updated: 2021/06/23 15:41:23 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
** The memcpy() function copies n bytes from memory area src to memory 
** area dest. The memory areas must not overlap.  
** Use memmove(3) if the memory areas do overlap.
** return value: a pointer to dest.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*cache_dst;
	unsigned char	*cache_src;

	cache_dst = (unsigned char *)dst;
	cache_src = (unsigned char *)src;
	if (cache_dst == '\0' && cache_src == '\0')
		return (dst);
	while (n--)
		*cache_dst++ = *cache_src++;
	return (dst);
}
