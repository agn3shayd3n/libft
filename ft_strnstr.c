/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:14:36 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 12:57:41 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locates first occurence of substring within len limit & returns pointer to it
char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (find[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] != '\0' && find[j] != '\0'
			&& i + j < len && find[j] == str[i + j])
			j++;
		if (find[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main() {
    const char *str = "Hello world";
    const char *find = "world";

    char *result = ft_strnstr(str, find, 11);

    if (result != NULL) {
        printf("La cadena '%s' fue encontrada en '%s'.\n", find, str);
        printf("La subcadena comienza en la posición %ld.\n", result - str);
    } else {
        printf("La cadena '%s' no fue encontrada en '%s'.\n", find, str);
    }

    return (0);
}
*/
