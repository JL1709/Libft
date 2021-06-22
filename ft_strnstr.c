/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 08:50:15 by julian            #+#    #+#             */
/*   Updated: 2021/06/22 11:53:09 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
** strnstr — locate a substring in a string
** The strnstr() function locates the first occurrence of the null-terminated
** string little in the string big, where not more than len characters are 
** searched. Characters that appear after a ‘\0’character are not searched.  
** Since the strnstr() function is a FreeBSD specific API, it should only be 
** used when portability is not a concern.
** return value:
** If little is an empty string, big is returned; if little occurs nowhere 
** in big, NULL is returned; otherwise a pointer to the first character of 
** the first occurrence of little is returned.
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	int		k;
	char	*cache;

	cache = (char *)big;
	i = 0;
	while (len-- && cache[i] != '\0')
	{
		j = 0;
		k = 0;
		while (little[j] != '\0' && k != 1)
		{
			if (len == 0 && little[j + 1] != '\0')
				return (NULL);
			if (little[j] != cache[i + j])
				k = 1;
			j++;
		}
		if (k == 0)
			return (&cache[i]);
		i++;
	}
	return (NULL);
}
