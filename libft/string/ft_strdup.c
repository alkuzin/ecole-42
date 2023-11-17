/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:47:59 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/17 18:48:52 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char *ft_strdup(char *src)
{
    int i;
    char *str;
    int length;

    length = ft_strlen(src);
    str = (char *)malloc(sizeof(char *) * length);

    while(src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';

    return str;
}