/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:23:43 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/11 15:37:11 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb);

int ft_iterative_factorial(int nb)
{
    if(nb < 0)
        return 0;

    int i;
    int result;
    
    i = 1;
    result = 1;
    while(i <= nb)
    {
        result *= i; 
        i++;
    }
    return result;
}
