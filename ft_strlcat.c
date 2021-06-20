/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 16:51:58 by julian            #+#    #+#             */
/*   Updated: 2021/06/20 18:16:55 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// The strlcat() function appends the NUL-terminated string src to the end of dst.  
// It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
// return value:
// The strlcat() function returns the total length of the string it tried to create.
// For strlcat() that means the initial length of dst plus the length of src.

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    int len_dst;
    int most_size;

    len_dst = 0;
    while (dst[len_dst] != '\0')
        len_dst++;
    most_size = 0;
    while (*src != '\0' && most_size <= ((int)size - i))
    {
        *dst++ = *src++;
        most_size++;
    }
    *dst = '\0';
    return (i + most_size);
}
