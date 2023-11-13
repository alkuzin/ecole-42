/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:28:40 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/13 22:51:05 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define TRUE 1
#define FALSE 0
#define SUCCESS 0

#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."

#define EVEN(x) ((x & 1) == 0)

typedef int t_bool;
t_bool ft_is_even(int nbr);
