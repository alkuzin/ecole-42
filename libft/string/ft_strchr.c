/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:17:12 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/17 17:36:28 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    
    
    i = 0;
    while(s[i])
    {
        if(s[i] == c)
            return ((char *)(s + i));
        i++;
    }

    if(s[i] == c)
        return ((char *)(s + i));
    
    return NULL;
}
