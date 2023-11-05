/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:34:30 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/05 22:38:11 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str);

int ft_str_is_printable(char *str)
{
    int i;

    i = -1;
    while(str[++i])
    {
        if (str[i] >= 0 && str[i] <= 32)
            return 0;
    }
    return 1;
}
