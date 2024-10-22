/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:23:18 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 12:56:23 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//compares, lexicographically, n characters of 2 strings
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (!str1 && !str2)
		return (0);
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && str1[i] == str2[i] && str1[i] != '\0'
		&& str2[i] != '\0')
		i++;
	return (str1[i] - str2[i]);
}

/*
#include <stdio.h>

int main() {
    const char *s1 = "Hello";
    const char *s2 = "helio";

    int result = ft_strncmp(s1, s2, 3);

    if (result == 0) {
        printf("Las cadenas son iguales hasta el tercer carácter.\n");
    } else if (result < 0) {
        printf("La cadena s1 es menor que s2 hasta el tercer carácter.\n");
    } else {
        printf("La cadena s1 es mayor que s2 hasta el tercer carácter.\n");
    }

    return (0);
}
*/
