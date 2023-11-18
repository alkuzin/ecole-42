/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:47:39 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/18 16:30:37 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
#define FT_STRING_H

#include "../libft.h"

/* Get string length */
int ft_strlen(const char *str);

/* Copy a string with truncation. */
size_t ft_strlcpy(char *dest, const char *src, size_t size);

/* Catenate a string with truncation. */
size_t ft_strlcat(char *dest, const char *src, size_t size);

/* The ft_strchr() returns a pointer to the 
 * first occurrence of the character c in the string s. */
char *ft_strchr(const char *s, int c);

/* The ft_strrchr() returns a pointer to the 
 * last occurrence of the character c in the string s. */
char *ft_strrchr(const char *s, int c);

/* The ft_strnstr() function locates the first	occurrence 
 * of the  null-termi-nated string little in the 
 * string big, where not more than len characters are searched. */
char *ft_strnstr(const char *big, const char *little, size_t len);

/* The ft_strcmp() compares the two strings s1 and s2. */
int ft_strncmp(char *s1, char *s2, size_t n);

/* The ft_split() returns an array of strings obtained by splitting ’s’
 * using the character ’c’ as a delimiter.*/
char **ft_split(char *str, char *charset);

/* The ft_strdup() returns a pointer to a new string 
 * which is a duplicate of the string s. */
char *ft_strdup(char *src);

/* The ft_strjoin() returns a new string, which is 
 * the result of the concatenation of ’s1’ and ’s2’. */
char *ft_strjoin(int size, char **strs, char *sep);

/* The ft_substr() returns a substring from the string ’s’.
 * The substring begins at index ’start’ and is of maximum size ’len’ */
char *ft_substr(char const *s, unsigned int start, size_t len);

#endif /* FT_STRING_H */
