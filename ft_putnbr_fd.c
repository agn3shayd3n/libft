/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar  <agnesgar@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:41:02 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 12:32:57 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	num;

	num = n;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n == 0)
		ft_putchar_fd('0', fd);
	else if (num < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

/*
int main() {
    int	fd = open("/Users/agnesgar/Desktop/test.txt", 2);

    if (fd == -1) {
        printf("No se pudo abrir el archivo.\n");
        return (1);
    }

    ft_putnbr_fd(12345, fd);
    ft_putnbr_fd(-9876, fd);
    ft_putnbr_fd(0, fd);

    close(fd);

    return (0);
}
*/