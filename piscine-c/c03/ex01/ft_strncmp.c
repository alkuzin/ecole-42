/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:35:53 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/10 17:59:14 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n);

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while(i < n && (s1[i] || s2[i]))
    {
        if(s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;    
    }    

    return 0;
}
