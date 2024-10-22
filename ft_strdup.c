/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:39:51 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 12:41:08 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// duplicates string and returns pointer to it
char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>

int main() {
    const char *original = "Hello world";

    char *duplicada = ft_strdup(original);

    if (duplicada != NULL) {
        printf("Cadena original: %s\n", original);
        printf("Cadena duplicada: %s\n", duplicada);

        free(duplicada);
    }
	else
	{
        printf("Error al duplicar la cadena.\n");
    }

    return (0);
}
*/
