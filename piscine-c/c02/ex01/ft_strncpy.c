/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:17:19 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/04 18:55:25 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str);
char *ft_strncpy(char *dest, char *src, unsigned int n);

int ft_strlen(char *str)
{
    int len;

    len = -1;
    while(str[++len])
        continue;
    return len;
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int src_len;
    int pos;

    src_len = ft_strlen(src);
    if(n > src_len)
        n = src_len;

    pos = -1;
    while(src[++pos] && pos < n)
    {
        dest[pos] = src[pos];
    }
    dest[pos] = '\0';
    return dest;
}
