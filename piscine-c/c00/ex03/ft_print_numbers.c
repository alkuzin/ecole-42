/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:17:28 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/04 15:33:37 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void);

void ft_print_numbers(void)
{
    int digit;
    char c;
    
    digit = 0;
    while(digit < 10)
    {
        c = digit + '0';
        write(1, &c, 1);
        digit++;
    }
}
