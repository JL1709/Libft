/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 16:51:58 by julian            #+#    #+#             */
/*   Updated: 2021/06/23 12:55:37 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
** strlcat() appends string src to the end of dst.  It will append at most 
** dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, 
** unless dstsize is 0 or the original dst string was longer than dstsize 
** (in practice this should not happen as it means that either dstsize is 
** incorrect or that dst is not a proper string).
** return value:
** The strlcat() function returns the total length of the string it 
** tried to create. For strlcat() that means the initial length of dst 
** plus the length of src.
*/

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize <= len_dst)
		return (len_dst + len_src - (len_dst - dstsize));
	while (*dst != '\0')
		dst++;
	while (*src != '\0' && (dstsize - len_dst - 1) > 0)
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = '\0';
	return (len_dst + len_src);
}
