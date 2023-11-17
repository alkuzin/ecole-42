/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:41:10 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/17 19:25:00 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static int ft_wordlen(char *str, char *charset);

static int ft_wordcount(char *str, char *charset);

static int ft_is_space(char to_find, char *str);

static int ft_wordlen(char *str, char *charset)
{
    int len;
    
    len = 0;
    while(ft_is_space(*str, charset))
        str++;

    while(*str && !(ft_is_space(*str, charset)))
    {
        len++;
        str++;
    }
    return len;
}

static int ft_wordcount(char *str, char *charset)
{
    int count;

    count = 0;  
    while(*str)
    {
        while(*str && ft_is_space(*str, charset))
            str++;
        if(*str && !(ft_is_space(*str, charset)))
        {
            count++;
            while(*str && !(ft_is_space(*str, charset)))
                str++;
        }
    }
    return count;
}

static int ft_is_space(char to_find, char *str)
{
    while(*str)
    {
        if(to_find == *str++)
            return 1;
    }
    return 0;
}

char **ft_split(char *str, char *charset)
{
    int i, j;
    char **strs;
    int word_count;

    word_count = ft_wordcount(str, charset);
    strs = (char **)malloc(sizeof(char*) * (word_count + 1));

    if(!str || strs == NULL)
        return NULL;

    i = 0;
    while(i < word_count)
    {
        strs[i] = (char *)malloc(sizeof(char) * (ft_wordlen(str, charset) + 1));
        if(strs[i] == NULL)
            return NULL;
            
        j = 0;
        while(ft_is_space(*str, charset))
            str++;
        
        while(*str && !(ft_is_space(*str, charset)))
        {
            strs[i][j] = *str;
            str++;
            j++;
        }
        strs[i][j] = '\0';
        i++;
    }
    strs[i] = NULL;
    return strs;
}
