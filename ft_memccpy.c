/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 15:07:14 by julian            #+#    #+#             */
/*   Updated: 2021/06/19 17:17:22 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// The memccpy() function copies no more than n bytes from memory area src to memory area dest,
// stopping when the character c is found.
// If the memory areas overlap, the results are undefined.
// return value:
// a pointer to the next character in dest after c,
// or NULL if c was not found in the first n characters of src.

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char       *cache_dest;
    const unsigned char *cache_src;
    int                 null;
    
    cache_dest = dest;
    cache_src = src;
    null = 0;
    while (n-- && *cache_src != c)
    {
        *cache_dest++ = *cache_src++;
        if (*cache_src == c)
            null = 1;
    }
    if (null == 0)
        return (NULL);
    else   
        *cache_dest = *cache_src;
    return (dest);
}
