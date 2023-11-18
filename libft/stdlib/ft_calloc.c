/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:51:50 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/18 16:22:27 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    size_t i;


    ptr = malloc(nmemb * size);
    if(!ptr)
        return NULL;

    ft_bzero(ptr, size);
    return ptr;    
}
