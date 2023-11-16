/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:43:58 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/16 18:49:58 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *cdest;
    const unsigned char *csrc;
    unsigned char cc;
    size_t i;

    cdest = (unsigned char *)dest;
    csrc = (const unsigned char *)src;
    cc = (unsigned char)c;
    
    i = 0;
    while(i < n)
    {
        cdest[i] = csrc[i];

        if(cdest[i] == cc)
            return (dest + i + 1);
        i++;
    }

    return NULL;
}
