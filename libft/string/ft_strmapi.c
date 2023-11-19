/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 10:53:21 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/19 12:09:30 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char *ft_strmapi(char const *s, int (*f)(int))
{
    char *str;
    unsigned int i;

    str = ft_strdup(s);
    if(!str)
        return NULL;

    i = 0;
    while(str[i])
    {
        str[i] = f(s[i]);
        i++;
    }

    return str;
}
