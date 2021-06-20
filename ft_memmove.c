/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 17:19:46 by julian            #+#    #+#             */
/*   Updated: 2021/06/20 15:00:44 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// The  memmove()  function  copies n bytes from memory area src to memory area dest.  
// The memory areas may overlap: copying takes place as though the bytes in src are first 
// copied into a temporary array that does not overlap src or dest, 
// and the bytes are then copied from the temporary array to dest.
// return value: a pointer to dest


void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char       *cache_dest;
    const unsigned char *cache_src;
    unsigned char       temp_array[n];
    int                 i;
    
    cache_dest = dest;
    cache_src = src;
    i = 0;
    while (n--)
        temp_array[i++] = *cache_src++;
    temp_array[i] = '\0';
    i = 0;
    while (temp_array[i] != '\0')
        *cache_dest++ = temp_array[i++];
    *cache_dest = '\0';
    return (dest); 
}
