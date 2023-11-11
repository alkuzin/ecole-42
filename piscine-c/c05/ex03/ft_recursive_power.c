/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:00:47 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/11 16:14:16 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power);

int ft_recursive_power(int nb, int power)
{
    if(power == 0)
        return 1;
    
    if(power == 1)
        return nb;
    
    if(power < 0)
        return 0;

    int n;
    
    n = nb;
    if(power > 0)
        n *= ft_recursive_power(nb, power - 1);
    return n;
}
