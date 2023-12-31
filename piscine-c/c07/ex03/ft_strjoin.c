/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:49:30 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/12 18:25:18 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str);

char *ft_strjoin(int size, char **strs, char *sep);

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return i;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i, j;
    int pos;
    char *str;
    int strs_size, sep_size;

    i = 0;
    pos = 0;
    while(i < size)
    {
        j = 0;
        while(strs[i][j])
        {
            j++;
            strs_size++;
        }
        i++;
    }
    i = 0;
    sep_size = ft_strlen(sep);
    str = (char *)malloc(sizeof(char) * (strs_size + ((size - 1) * (sep_size)) + 1));
    
    if(str == NULL)
        return str;
    
    while(i < size)
    {
        j = 0;
        while(strs[i][j])
        {
            str[pos] = strs[i][j];
            pos++;
            j++;
        }
        if(i == size - 1)
        {
            i++;
            continue;
        }
        j = 0;
        while(j < sep_size)
        {
            str[pos] = sep[j];
            pos++;
            j++;
        }
        i++;
    }
    str[pos] = '\0';
    return str;
}
