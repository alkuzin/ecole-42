/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:19:26 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/19 11:40:30 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
#define FT_STDIO_H

#include "../libft.h"

/* Print character */
extern void ft_putchar(char c);

/* Print string on the current line */
extern void ft_putstr(char *str);

/* Print string on the new line */
extern void ft_puts(char *str);

/* Outputs the character ’c’ to the given file descriptor. */
extern void ft_putchar_fd(char c, int fd);

/* Outputs the string ’s’ to the given file descriptor. */
extern void ft_putstr_fd(char *s, int fd);

/* Outputs the string ’s’ to the given file 
 * descriptor, followed by a newline. */
extern void ft_putendl_fd(char *s, int fd);

/* Outputs the integer ’n’ to the given file descriptor.*/
extern void ft_putnbr_fd(int n, int fd);

#endif /* FT_STDIO_H */
