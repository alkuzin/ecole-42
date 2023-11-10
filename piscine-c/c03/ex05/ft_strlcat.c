/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:53:01 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/10 21:30:54 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int i;
    unsigned int dest_size;

    i = 0;
    dest_size = 0;
    while(dest[dest_size])
        dest_size++;
    while(src[i] && (dest_size < (size - 1)))
    {
        dest[dest_size] = src[i];
        dest_size++;
        i++;
    }
    dest[dest_size] = '\0';
    return (dest_size);
}
