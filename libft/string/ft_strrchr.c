/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:37:56 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/17 17:43:35 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    
    
    i = ft_strlen(s);
    
    if(s[i] == c)
        return ((char *)(s + i));

    while(i >= 0)
    {
        if(s[i] == c)
            return ((char *)(s + i));
        i--;
    }
    
    return NULL;
}
