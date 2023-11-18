/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:29:01 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/18 16:47:26 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;

    substr = (char *)malloc(sizeof(char) * (len + 1));
 
    if(!substr)
        return NULL;
    
    i = 0;
    while(s[i + start] && i < len)
    {
        substr[i] = s[i + start];
        i++;
    }
    substr[i] = '\0';

    return substr;
}
