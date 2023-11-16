/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:16:03 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/16 17:39:17 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void *ft_memcpy(void *dest, const void *src, t_size n)
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
