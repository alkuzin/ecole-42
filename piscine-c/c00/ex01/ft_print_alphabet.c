/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:17:28 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/04 15:17:44 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);
void ft_print_alphabet(void);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    char letter;

    letter = 'a';
    while(letter <= 'z')
    {
        ft_putchar(letter++);
    }
    ft_putchar('\n');
}
