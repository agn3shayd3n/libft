/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:39:23 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 12:47:44 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main()
{
    int	fd = open("/Users/agnesgar/Desktop/test.txt", 2);
    
    if (fd == -1)
	{
        printf("No se pudo abrir el archivo.\n");
        return (1);
    }
    
    ft_putchar_fd('H', fd);
    ft_putchar_fd('o', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('a', fd);
    ft_putchar_fd('\n', fd);

    close(fd);
    
    return (0);
}
*/