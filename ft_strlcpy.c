/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:12:56 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 12:46:11 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copies src in dst && substitutes content if necessary
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char src[] = "Hello, world!";
    char dst[20];

    size_t result_length = strlcpy(dst, src, sizeof(dst));

    printf("La cadena copiada es: %s\n", dst);
    printf("Longitud de la cadena copiada: %zu\n", result_length);

    return (0);
}
*/
