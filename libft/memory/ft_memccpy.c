/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:43:58 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/16 17:40:02 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

#include <stdio.h>
void *ft_memccpy(void *dest, const void *src, int c, t_size n)
{
    unsigned char *cdest;
    const unsigned char *csrc;
    unsigned char cc;
    t_size i;

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
