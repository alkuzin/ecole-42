/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:40:55 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/19 11:44:30 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

void ft_putnr_fd(int n, int fd)
{
    int temp;
    int size;

    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }

    temp = n;
    size = 1;
    
    while ((temp /= 10) > 0)
        size *= 10;

    temp = n;
    while(size)
    {
        ft_putchar_fd((temp / size) + '0', fd);
        temp %= size;
        size /= 10;
    }
}
