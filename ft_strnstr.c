/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 08:50:15 by julian            #+#    #+#             */
/*   Updated: 2021/06/23 10:41:38 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
** strnstr — locate a substring in a string
** The strnstr() function locates the first occurrence of the null-terminated
** string needle in the string haystack, where not more than len characters are 
** searched. Characters that appear after a ‘\0’character are not searched.  
** Since the strnstr() function is a FreeBSD specific API, it should only be 
** used when portability is not a concern.
** return value:
** If needle is an empty string, haystack is returned; if needle occurs nowhere 
** in haystack, NULL is returned; otherwise a pointer to the first character of 
** the first occurrence of needle is returned.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	int		k;
	
	
	if (*needle == 0)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		k = 0;
		while (needle[j] != '\0' && k != 1)
		{
			if (len == 0 && needle[j + 1] != '\0')
				return (NULL);
			if (i + j == len)
				return (NULL);
			if (needle[j] != haystack[i + j])
				k = 1;
			j++;
		}
		if (k == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
