/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:37:02 by jludt             #+#    #+#             */
/*   Updated: 2021/06/20 18:39:07 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// The strlcpy() function copies up to size - 1 characters 
// from the NUL-terminated string src to dst, NUL-terminating the result.
// return value:
// The strlcpy() function returns the total length of the string it tried to create.
// For strlcpy() that means the length of src.


size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  length;

    length = 0;
    while (src[length] != '\0')
        length++;
    while (size--)
        *dst++ = *src++;
    *dst = '\0';
    return (length);
}
