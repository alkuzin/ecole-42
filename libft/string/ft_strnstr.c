/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:47:30 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/17 19:24:29 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    int little_len;
    
    if(!little)
       return ((char *)(big));
    
    i = 0;
    little_len = ft_strlen(little);
    while(big[i] && i < len)
    {
        
        if(big[i] == little[0])
        {
            j = 0;
            while(little[j])
            {
                if(big[i + j] != little[j])
                    break;
                j++;
            }

            if(j == (size_t)little_len)
                return ((char *)big + i);
        }
        i++;
    }
    return NULL; 
}
