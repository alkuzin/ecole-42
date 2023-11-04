/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:52:00 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/04 22:53:34 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str);

int ft_str_is_lowercase(char *str)
{
    int i;

    i = -1;
    while(str[++i])
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
            return 0;
    }
    return 1;
}
