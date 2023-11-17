/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:22:17 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/17 19:23:49 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    int dest_len;
    int src_len;

    
    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);

    if(size <= (size_t)src_len)
        return (size + src_len);
    
    i = 0;
    while(src[i] && i < (size - dest_len - 1))
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[i + dest_len] = '\0';
    return (dest_len + src_len);
}
