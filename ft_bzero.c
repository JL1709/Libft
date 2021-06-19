/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 12:41:06 by julian            #+#    #+#             */
/*   Updated: 2021/06/19 13:16:13 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// The bzero() function erases the data in the n bytes of the memory starting at the 
// location pointed to by s, by writing zeros (bytes containing '\0') to that area.
// return value: none


void    ft_bzero(void *s, size_t n)
{
    unsigned char   *null;

    null = s;
    while (n--)
        *null++ = '\0';
}
