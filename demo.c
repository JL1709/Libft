/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   demo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 12:57:42 by julian            #+#    #+#             */
/*   Updated: 2022/01/02 13:08:28 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	char	*src = "demo";
	int		len_src = ft_strlen(src);
	
	printf("%s = %d\n", src, len_src);

	return (0);
}
