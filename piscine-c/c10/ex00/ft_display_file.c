/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:48:44 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/14 15:28:50 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void ft_putchar(char c);

void ft_puts(char *str);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_puts(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    ft_putchar('\n');
}

int main(int argc, char **argv)
{
    if(argc == 1)
    {
        ft_puts("File name missing.");   
        return 1;     
    }
    
    if(argc > 2)
    {
        ft_puts("Too many arguments.");        
        return 1;     
    }

    int fd;
    char c;
    int read_bytes;

    if((fd = open(argv[1], O_RDONLY)) == -1)
    {
        ft_puts("Cannot read file.");        
        return 1;     
    }     

    while(read_bytes = read(fd, &c, 1))
    {
        if(read_bytes == -1)
        {
            ft_puts("read(): Error to read file");
            return 1;
        }
        ft_putchar(c);
    }
    
    if(close(fd) == -1)
    {
        ft_puts("close(): Error to close file");
    }

    ft_putchar('\n');
    return 0;
}
