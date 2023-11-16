/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:16:03 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/16 18:50:35 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *cdest;
    const unsigned char *csrc;
    int i;

    cdest = (unsigned char *)dest;
    csrc = (const unsigned char *)src;
    i = 0;

    while(csrc[i] && n > 0)
    {
        cdest[i] = csrc[i];
        n--;
        i++;
    } 
    
    return dest;
}
