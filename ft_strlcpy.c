/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:37:02 by jludt             #+#    #+#             */
/*   Updated: 2021/06/23 14:19:59 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
** strlcpy() and strlcat() take the full size of the destination buffer and 
** guarantee NUL-termination if there is room.  Note that room for the NUL 
** should be included in dstsize.
** strlcpy() copies up to dstsize - 1 characters from the string src to dst, 
** NUL-terminating the result if dstsize is not 0.
** return value:
** The strlcpy() function returns the total length of the string it tried 
** to create. For strlcpy() that means the length of src.
*/

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	length;
	size_t	i;
	
	length = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (length);
	while (dst[i] != '\0' && i < (dstsize - 1) && i < length)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (length);
}
