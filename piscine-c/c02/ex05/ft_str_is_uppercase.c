/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:55:04 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/04 22:56:30 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str);

int ft_str_is_uppercase(char *str)
{
    int i;

    i = -1;
    while(str[++i])
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
            return 0;
    }
    return 1;
}
