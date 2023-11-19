/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:47:59 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/19 11:10:19 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char *ft_strdup(const char *src)
{
    int i;
    char *str;
    int length;

    length = ft_strlen(src);
    str = (char *)malloc(sizeof(char *) * length);

    i = 0;
    while(src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';

    return str;
}
