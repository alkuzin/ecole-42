/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:47:39 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/16 18:36:45 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEMORY_H
#define FT_MEMORY_H

#include "../libft.h"

/* The ft_memset() fills the first n bytes of the 
 * memory of the area pointed to by s 
 * with the constant byte c. */
extern void *ft_memset(void *s, int c, size_t n);

/* The ft_bzero() erases the data in the n bytes 
 * of the memory of the area pointed to by s, 
 * by writing '\0' bytes to that area. */
extern void ft_bzero(void *s, size_t n);

/* The ft_memcpy() copies n bytes from memory area src
 * to memory area dest. */
extern void *ft_memcpy(void *dest, const void *src, size_t n);

/* The ft_memccpy() copies no more than n bytes 
 * from memory area src to memory area dest, 
 * stopping when the character c is found. */
extern void *ft_memccpy(void *dest, const void *src, int c, size_t n);

/* The ft_memmove() copies n bytes 
 * from memory area src to memory area dest. */
extern void *ft_memmove(void *dest, const void *src, size_t n);

/* The ft_memchr() scans the initial n bytes
 * of the memory area pointed to by s
 * for the first instance of c. */
extern void *ft_memchr(const void *s, int c, size_t n);

#endif /* FT_MEMORY_H */
