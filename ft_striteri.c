/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar  <agnesgar@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:10:18 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 12:43:22 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// applies f function to every char in 's'.
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}

/*
#include <stdio.h>

void print_index_and_char(unsigned int index, char *c) {
    printf("Índice: %u, Carácter: %c\n", index, *c);
}

int main() {
    char str[] = "Hello";

    ft_striteri(str, &print_index_and_char);

    return (0);
}
*/
