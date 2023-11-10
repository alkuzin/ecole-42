/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:04:25 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/10 17:33:33 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2);

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] || s2[i])
    {
        
        if(s1[i] < s2[i])
            return -1; 

        if(s1[i] > s2[i])
            return 1; 
        
        i++;
    }    

    return 0;
}