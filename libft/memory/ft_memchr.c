/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:04:59 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/16 18:50:14 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void *ft_memchr(const void *s, int c, size_t n)
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
