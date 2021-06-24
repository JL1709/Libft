/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:34:53 by jludt             #+#    #+#             */
/*   Updated: 2021/06/23 15:48:06 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	start(char *str)
{
	int	i;

	i = 0;
	while (1)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\v')
			i++;
		else if (str[i] == '\f' || str[i] == '\r' || str[i] == '\n')
			i++;
		else
			return (i);
	}
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	number;

	i = start((char *)str);
	sign = 1;
	if (str[i] == '-')
		sign = -1;
	number = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] % 48);
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		while (str[i + 1] >= '0' && str[i + 1] <= '9')
		{
			number = number * 10 + (str[i + 1] % 48);
			i++;
		}
	}
	return (number * sign);
}
