/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:19:26 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/14 17:35:57 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
#define FT_STDIO_H

#include <unistd.h>
#include <fcntl.h>


/* Print character */
extern void ft_putchar(char c);

/* Print string on the current line */
extern void ft_putstr(char *str);

/* Print string on the new line */
extern void ft_puts(char *str);

#endif /* FT_STDIO_H */