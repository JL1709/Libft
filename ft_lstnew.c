/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 15:03:47 by jludt             #+#    #+#             */
/*   Updated: 2021/06/25 15:32:16 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a new element. The variable
** ’content’ is initialized with the value of the parameter ’content’. 
** The variable ’next’ is initialized to NULL.
** parameters:
** content - The content to create the new element with.
** return value: The new element.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*n;

	n = malloc(sizeof(t_list));
	if (n == NULL)
		return (NULL);
	n -> content = content;
	n -> next = NULL;
	return (n);
}
