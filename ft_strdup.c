/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 14:27:43 by julian            #+#    #+#             */
/*   Updated: 2021/06/22 11:44:12 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** The strdup() function returns a pointer to a new string which is a 
** duplicate of the string s.  Memory for the new string is obtained with 
** malloc(3), and can be freed with free(3).
** return value:
** On success, the strdup() function returns a pointer to the duplicated 
** string. It returns NULL if insufficient memory was available, with errno 
** set to indicate the cause of the error.
*/

char	*ft_strdup(const char *s)
{
	char	*duplicate;
	char	*cache;
	int		s_len;

	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	duplicate = (char *)malloc((sizeof(*s) * s_len) + 1);
	if (duplicate == NULL)
		return (NULL);
	cache = duplicate;
	while (*s != '\0')
		*cache++ = *s++;
	*cache = '\0';
	return (duplicate);
}
