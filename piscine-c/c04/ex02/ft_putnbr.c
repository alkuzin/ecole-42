/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:43:26 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/10 21:43:34 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_putchar(char c);
void ft_putnbr(int nb);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    int temp;
    int size;

    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }

    temp = nb;
    size = 1;
    
    while ((temp /= 10) > 0)
        size *= 10;

    temp = nb;
    while(size)
    {
        ft_putchar((temp / size) + '0');
        temp %= size;
        size /= 10;
    }
}
