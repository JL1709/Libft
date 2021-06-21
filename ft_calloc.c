/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:11:51 by julian            #+#    #+#             */
/*   Updated: 2021/06/21 17:02:52 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;
    
    if (nmemb == 0 || size == 0)
        return (NULL)
    ptr = malloc(nmemb * size);
    return (ptr);
}
