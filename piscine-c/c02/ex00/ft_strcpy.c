/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:55:03 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/04 19:02:44 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str);
char *ft_strcpy(char *dest, char *src);

int ft_strlen(char *str)
{
    int len;

    len = -1;
    while(str[++len])
        continue;
    return len;
}

char *ft_strcpy(char *dest, char *src)
{
    int pos;

    pos = -1;
    while(src[++pos])
    {
        dest[pos] = src[pos];
    }
    return dest;
}
