#include <stdlib.h>
#include "libft.h"

/*
** Iterates the list ’lst’ and applies the function’f’ to the content of 
** each element. Creates a new list resulting of the successive applications 
** of the function ’f’. The ’del’ function is used to delete the content of 
** an element if needed.
** parameters:
** lst - The adress of a pointer to an element.
** f - The adress of the function used to iterate on the list.
** del - The adress of the function used to delete the content of 
** an element if needed.
** return value: The new list. NULL if the allocation fails.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list_new;
	t_list	*add_new;

	list_new = NULL;
	while (lst != NULL)
	{
		add_new = ft_lstnew((*f)(lst->content));
		if (add_new == NULL)
		{
			(*del)(list_new);
			return (list_new);
		}
		ft_lstadd_back(&list_new, add_new);
		lst = lst->next;
	}
	return (list_new);
}
