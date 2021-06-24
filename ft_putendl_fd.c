/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 18:12:06 by jludt             #+#    #+#             */
/*   Updated: 2021/06/24 18:20:55 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Outputs the string ’s’ to the given file
** descriptor, followed by a newline.
** s - The string to output.
** fd - The file descriptor on which to write.
** return value: none
*/

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s != '\0')
			write(fd, s++, 1);
		write(fd, "\n", 1);
	}
}
