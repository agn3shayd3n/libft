/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:37:32 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/04 14:48:40 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// compares two strings until n
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n > 0)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
		n--;
	}
	return (0);
}

/*
int main() 
{
    unsigned char buffer1[] = {0, 1, 2};
    unsigned char buffer2[] = {0, 1, 2, 5, 4};
    size_t n = sizeof(buffer1);

    int result = ft_memcmp(buffer1, buffer2, n);

    // Imprimir el resultado de la comparación
    if (result == 0) {
        printf("Las dos áreas de memoria son iguales hasta %zu bytes.\n", n);
    } else if (result < 0) {
        printf("área memoria 1 menor que área memoria 2 hasta %zu bytes.\n", n);
    } else {
        printf("área memoria 1 mayor que área memoria 2 hasta %zu bytes.\n", n);
    }

    return (0);
}
*/