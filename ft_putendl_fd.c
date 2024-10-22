/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:39:48 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 12:26:31 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
int main()
{
    int fd = open("/Users/agnesgar/Desktop/test.txt", 2);

   	if (fd == -1)
	{
        printf("No se pudo abrir el archivo.\n");
        return (1);
    }

    ft_putendl_fd("holi", fd);

	close(fd);

    return (0);
}
*/