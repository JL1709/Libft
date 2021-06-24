/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:35:29 by jludt             #+#    #+#             */
/*   Updated: 2021/06/24 12:03:23 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a copy of’s1’ with the characters
** specified in ’set’ removed from the beginning and the end of the string.
** parameters:
** s1 - The string to be trimmed.
** s2 - The reference set of characters to trim.
** return value:
** The trimmed string. NULL if the allocation fails.
*/

int	find_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		found = 0;
		while (set[j] != '\0' && found == 0)
		{
			if (s1[i] == set[j])
				found = 1;
			j++;
		}
		if (found == 0)
			return (i);
		i++;
	}
	return (0);
}

int	find_end(char const *s1, char const *set, int length)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	while (length)
	{
		j = 0;
		found = 0;
		while (set[j] != '\0' && found == 0)
		{
			if (s1[length - 1] == set[j])
				found = 1;
			j++;
		}
		if (found == 0)
			return (length - 1);
		length--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start_s1;
	int		end_s1;
	char	*s1_trim;
	int		i;

	if (s1 == 0)
		return (0);
	start_s1 = find_start(s1, set);
	end_s1 = find_end(s1, set, ft_strlen(s1));
	s1_trim = (char *)malloc(sizeof(*s1) * (end_s1 - start_s1 + 1) + 1);
	if (s1_trim == NULL)
		return (NULL);
	if ((end_s1 - start_s1 + 1) == 1)
		return ("\0");
	i = 0;
	while ((end_s1 + 1) - start_s1)
		s1_trim[i++] = s1[start_s1++];
	s1_trim[i] = '\0';
	return (s1_trim);
}
