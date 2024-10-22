/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:10:39 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 12:43:09 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// joins s1 && s2 to create new string.
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		k;

	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	k = 0;
	while (s2[k] != '\0')
	{
		new[i + k] = s2[k];
		k++;
	}
	new[i + k] = '\0';
	return (new);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *s1 = "Hello, ";
    const char *s2 = "world!";

    char *result = ft_strjoin(s1, s2);

    if (result) {
        // Imprimir el resultado de la concatenación
        printf("La cadena concatenada es: %s\n", result);

        free(result);
    } else {
        printf("Error al concatenar las cadenas.\n");
    }

    return (0);
}
*/
