/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:17:19 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/04 22:13:46 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n);

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    
    i = -1;
    while(src[++i] && i < n)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}