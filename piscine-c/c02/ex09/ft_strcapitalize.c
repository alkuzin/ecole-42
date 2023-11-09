/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:08:52 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/09 18:14:32 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str);

char *ft_strcapitalize(char *str)
{
    int i;
    i = 0;
    
    while(str[i])
    {
        if (str[i] == ' ' && ((str[i+1] >= 'a') && (str[i] <= 'z')))
            str[i+1] = str[i+1] - 32;
        i++;
    }
    return str;
}
