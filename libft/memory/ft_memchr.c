/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:04:59 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/16 18:20:50 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void *ft_memchr(const void *s, int c, t_size n)
{
    unsigned char *src;    
    unsigned char cc;
    int i;

    src = (unsigned char*)s;
    cc = (unsigned char)c;
    i = 0;
    while(src[i] && n > 0)
    {
        if(src[i] == cc)
            return ((char *)(src + i));
        i++;
        n--;
    }

    return NULL;
}
