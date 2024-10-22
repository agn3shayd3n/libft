/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:48:23 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 12:36:57 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || !fd)
		return ;
	write(fd, s, ft_strlen(s));
}

/*
int main() {

    int	fd = open("/Users/agnesgar/Desktop/test.txt", 2);

    if (fd == -1)
		return (1);

    ft_putstr_fd("holi\n", fd);

    close(fd);

    return (0);
}
*/