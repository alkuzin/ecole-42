/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:54:38 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/16 18:21:38 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
#define FT_CTYPE_H

#include "../libft.h"

/* Checks for an alphabetic character */
extern int ft_isalpha(int c);

/* Checks for a digit */
extern int ft_isdigit(int c);

/* Checks for an alphanumeric character */
extern int ft_isalnum(int c);

/* Checks for an ASCII character */
extern int ft_isascii(int c);

/* Checks for a printable character (including space) */
extern int ft_isprint(int c);

/* Converts to uppercase character */
extern int ft_toupper(int c);

/* Converts to lowercase character */
extern int ft_tolower(int c);

/* Checks for an uppercase character */
extern int ft_isupper(int c);

/* Checks for a lowercase character */
extern int ft_islower(int c);

#endif /* FT_CTYPE_H */
