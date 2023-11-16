/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:43:49 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/16 18:50:55 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *cdest;
    const unsigned char *csrc;
    unsigned char temp_dest[n];
    int i;

    cdest = (unsigned char *)dest;
    csrc = (const unsigned char *)src;
    
    i = 0;
    while(csrc[i] && n > 0)
    {
        temp_dest[i] = csrc[i];
        n--;
        i++;
    }

    i = 0;
    while(temp_dest[i])
    {
        cdest[i] = temp_dest[i];
        i++;
    } 
    
    return dest;
}
