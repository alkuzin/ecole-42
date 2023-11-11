/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:38:36 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/11 15:47:24 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb);

int ft_recursive_factorial(int nb)
{
    int n;

    n = nb;
    if(n == 0)
        return 1;
    else if(n < 0)
        return 0;
    else
    {
        n *= ft_recursive_factorial(nb - 1);
        return n;
    }
}
