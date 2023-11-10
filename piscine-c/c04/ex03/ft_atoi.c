/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:45:24 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/10 22:08:51 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str);

int ft_atoi(char *str)
{
    int i;
    int res;
    int is_negative;

    i = 0;
    res = 0;
    is_negative = 0;
    
    if(str[i] == '-')
    {
        is_negative = 1;
        i++;
    }
    
    while(str[i] && (str[i] >= '0' && str[i] <= '9'))
    {

        res *= 10;
        res += ((int)str[i] - '0');
        i++;
    }

    if(is_negative)
        return -res;
    else
        return res;
}
