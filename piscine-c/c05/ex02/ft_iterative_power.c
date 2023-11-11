/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:48:40 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/11 15:58:56 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power);

int ft_iterative_power(int nb, int power)
{
    if(power == 0)
        return 1;
    
    if(power == 1)
        return nb;
    
    if(power < 0)
        return 0;

    int n;
    int i;

    n = 1;
    i = 0;
    while(i < power)
    {
        n *= nb;
        i++;
    }
    return n;
}
