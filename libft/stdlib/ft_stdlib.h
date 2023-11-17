/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:37:49 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/17 19:10:29 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
#define FT_STDLIB_H

#include "../libft.h"

#define ABS(x) (x < 0 ? -x : x)

/* The atoi() converts the initial portion 
 * of the string pointed to by str to int. */
int ft_atoi(char *str);

/* The ft_range() returns the array of int 
 * from min including to max excluding. */
int *ft_range(int min, int max);

#endif /* FT_STDLIB_H */
