/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:08:03 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/12 17:47:36 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_abs(int n);

int *ft_range(int min, int max);

int ft_abs(int n)
{
    if(n < 0)
        n = -n;
    return n;
}

int *ft_range(int min, int max)
{
    if(min >= max)
        return NULL;

    int i, n;
    int* array;
    int size;

    i = 0;
    n = min;
    size = ft_abs(min) + ft_abs(max);
    array = (int *)malloc(sizeof(int) * (size - 1));
    while(n < max)
    {
        array[i] = n;
        n++;
        i++;
    }    
    return array;
}
