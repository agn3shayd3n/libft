/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:23:03 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 12:44:41 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// joins src && dst together 
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (dest[i] && i < size)
		i++;
	while (src[k] && (i + k + 1) < size)
	{
		dest[i + k] = src[k];
		k++;
	}
	if (i < size)
		dest[i + k] = '\0';
	return (i + ft_strlen(src));
}

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    char dest[20] = "Hello";
    char src[] = "world";

    size_t size = sizeof(dest);

    size_t result_length = ft_strlcat(dest, src, size);

    if (result_length < size) {
        printf("La cadena concatenada es: %s\n", dest);
    } else {
        printf("No se pudo concatenar.\n");
    }

    return (0);
}
*/
