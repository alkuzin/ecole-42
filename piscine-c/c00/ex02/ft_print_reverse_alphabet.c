/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:17:28 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/04 15:23:39 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);
void ft_print_reverse_alphabet(void);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
    char letter;

    letter = 'z';
    while(letter >= 'a')
    {
        ft_putchar(letter--);
    }
    ft_putchar('\n');
}
