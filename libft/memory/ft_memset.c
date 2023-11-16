/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:48:55 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/16 16:02:10 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void *ft_memset(void *s, int c, t_size n)
{
    unsigned char *src;
    unsigned char cc;
    int i;


    src = (unsigned char *)s;
    cc = (unsigned char)c;
    i = 0;
    while(src[i] && n > 0)
    {
        src[i] = cc;
        i++;
        n--;
    }

    return s;
}
