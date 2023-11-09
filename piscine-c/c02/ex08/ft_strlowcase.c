/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:06:27 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/09 18:07:10 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str);

char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if ((str[i] >= 'A') && (str[i] <= 'Z'))
            str[i] = str[i] + 32;
        i++;
    }
    return str;
}
