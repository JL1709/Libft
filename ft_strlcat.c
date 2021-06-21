/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 16:51:58 by julian            #+#    #+#             */
/*   Updated: 2021/06/21 14:17:26 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

// The strlcat() function appends the NUL-terminated string src to the end of dst.  
// It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
// return value:
// The strlcat() function returns the total length of the string it tried to create.
// For strlcat() that means the initial length of dst plus the length of src.

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{ 
    size_t  len_dst;
    size_t  len_src;
  
    len_dst = 0;
    while (dst[len_dst] != '\0')
        len_dst++;
    len_src = 0;
    while (src[len_src] != '\0')
        len_src++;
    if (size <= len_dst)
        return (len_dst + len_src - (len_dst - size));
    while (*dst != '\0')
        dst++;
    while (*src != '\0' && (size - len_dst - 1) > 0)
    {
        *dst++ = *src++;
        size--;
    }
    *dst = '\0';
    return (len_dst + len_src);
}
