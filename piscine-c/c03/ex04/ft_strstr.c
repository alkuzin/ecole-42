/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:17:42 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/10 19:03:54 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_strlen(char *str);

char *ft_strstr(char *str, char *to_find);

int ft_strlen(char *str)
{
    int len;

    len = -1;
    while(str[++len])
        continue;
    return len;
}

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    int to_find_len;

    i = 0;
    to_find_len = ft_strlen(to_find);
    while(str[i])
    {
        if(str[i] == to_find[0])
        {
            j = 1;
            while(to_find[j])
            {
                if(str[i + j] != to_find[j])
                    break;    
                j++;
            }
            if(j == to_find_len)
                return &str[i];
        }
        i++;
    }
    return 0;
}
