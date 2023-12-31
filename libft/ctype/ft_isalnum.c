/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:16:18 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/15 20:17:41 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

int ft_isalnum(int c);

int ft_isalnum(int c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
}
