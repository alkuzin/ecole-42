/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:42:00 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/04 15:42:19 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n);

void ft_is_negative(int n)
{
    char c;

    if (n < 0)
    {
        c = 'N';
        write(1, &c, 1);
    }
    else if(n >= 0)
    {
        c = 'P';
        write(1, &c, 1);
    }
}