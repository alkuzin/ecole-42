/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:51:20 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/12 17:05:41 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str);

char *ft_strdup(char *src);

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return i;
}

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
