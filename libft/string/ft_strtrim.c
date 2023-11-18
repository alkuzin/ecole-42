/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:52:56 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/18 19:10:48 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static int ft_is_space(char to_find, char const *str)
{
    while(*str)
    {
        if(to_find == *str++)
            return 1;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int len;
    int symbols_count;
    int i;
    int start_pos;
    int end_pos;

    i = 0;
    symbols_count = 0;
    while(s1[i])
    {
        symbols_count += ft_is_space(s1[i], set);
        i++;
    }

    len = ft_strlen(s1);

    i = 0;
    while(i < len && ft_is_space(s1[i], set))
        i++;

    start_pos = i;
    i = len - 1;
    while(i > 0 && ft_is_space(s1[i], set))
        i--;

    end_pos = i;
    str = ft_substr(s1, start_pos, end_pos - start_pos + 1);
    
    str[end_pos] = '\0';
    return str;
}
