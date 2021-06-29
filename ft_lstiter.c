/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:54:07 by jludt             #+#    #+#             */
/*   Updated: 2021/06/29 10:57:19 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates the list ’lst’ and applies the function’f’ 
** to the content of each element.
** parameters:
** lst - The adress of a pointer to an element.
** f - The adress of the function used to iterate on the list.
** return value: None
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	if (tmp != NULL)
	{
		while (tmp != NULL)
		{
			(*f)(tmp->content);
			tmp = tmp->next;
		}
	}	
}
