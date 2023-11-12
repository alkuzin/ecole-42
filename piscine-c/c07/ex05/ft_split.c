/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:26:29 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/12 19:45:37 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define NULL ((void *)0)

static int ft_wordlen(char *str, char *charset);

static int ft_wordcount(char *str, char *charset);

static int ft_is_space(char to_find, char *str);

char **ft_split(char *str, char *charset);

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
    int state; /*0 - if not in charset, 1 - if in charset*/
    char **strs;
    int word_count;
    int word_length;

    word_count = ft_wordcount(str, charset);
    state = 0;
    
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
