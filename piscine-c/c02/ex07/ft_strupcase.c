/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:39:52 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/05 23:17:52 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str);

char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if ((str[i] >= 'a') && (str[i] <= 'z'))
            str[i] = str[i] - 32;
        i++;
    }
    return str;
}
