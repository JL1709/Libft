/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:34:53 by jludt             #+#    #+#             */
/*   Updated: 2021/06/17 12:13:51 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int   valid_input(const char *src)
{
    static int  i = 0;

    if (src[0] > 47 && src[0] < 58)
        return (1);
    if (src[0] == '-' || src[0] == '+' || src[0] == ' ')
    {
        if (src[1] < 32 || (src[1] > 32 && src[1] < 48) || src[1] > 57)
            return (0);
        if (src[0] == '-')
            return (2);
        if (src[0] == '+')
            return (3);
        if (src[0] == ' ')
        {
            while (src[i] == ' ')
                i++;
            if (src[i] > 47 && src[i] < 58)
                return (1);
            if (src[i] == '-') 
                return (2);
            if (src[i] == '+')
                return (3);
        }
    }
    return (0);
}

int ft_atoi(const char *str)
{
    int  sign = valid_input(str);

    if (sign == 0)
        return (0);
    
    return (sign);
    
}

