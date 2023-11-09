/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:32:45 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/09 19:06:39 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_to_hex(char *hex_number, unsigned int n);

void ft_putstr_non_printable(char *str);

void ft_to_hex(char *hex_number, unsigned int n)
{
    int i;
    
    i = 0;
    while (n != 0) 
    {
        int remainder;
       
        remainder = n % 16;
        
        if (n < 10)
            hex_number[i] = remainder + '0';
        else
            hex_number[i] = remainder - 10 + 'a';
        
        n /= 16;
        i++;
    }
    hex_number[2] = '\0';    
}

void ft_putstr_non_printable(char *str)
{
    int i;
    int j;
    char c;
    char hex_number[2 + 1];

    i = 0;
    while(str[i])
    {
        if((str[i] >= 0 && str[i] <= 32) && !(str[i] == ' ')) 
        {
            j = 0;
            c = '\\';
            ft_to_hex(hex_number, str[i]);
            write(1, &c, 1);
            
            if(str[i] <= 16)
            {
                c = '0';
                write(1, &c, 1);
            }
            while(hex_number[j])
            {
                write(1, &hex_number[j], 1);
                j++;
            }
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}
