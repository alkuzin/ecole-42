/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:32:45 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/18 19:01:28 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int ft_pow(int nb, int power)
{
    if(power == 0)
        return 1;
    
    if(power == 1)
        return nb;
    
    if(power < 0)
        return 0;

    int n;
    int i;

    n = 1;
    i = 0;
    while(i < power)
    {
        n *= nb;
        i++;
    }
    return n;
}

char *ft_itoa(int n)
{
    char *str;
    int nb;
    int i;
    int j;
    int k;
    int is_negative;
   
    if(n == 0)
    {
        str = (char *)malloc(sizeof(char) * 2);
        str[0] = '0';
        str[1] = '\0';
        return str;
    } 
    
    is_negative = (n < 0);
    nb = ABS(n);
    i = 0;
    while(nb > 0)
    {
        nb /= 10;
        i++;
    }
    str = (char *)malloc(sizeof(char) * (i + 1 + is_negative));

    if(!str)
        return NULL;

    if(is_negative)
        str[0] = '-';

    nb = ABS(n);
    j = 0;
    while(j < i)
    {
        k = (nb % ft_pow(10, j + 1)) / ft_pow(10, j);
        str[i - j + is_negative - 1] = k + '0';
        j++;
    }
    str[j + is_negative] = '\0';

    return str;
}
