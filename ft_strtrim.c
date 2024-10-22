/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:15:23 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 12:59:31 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// deletes chars from the beginning and end of string
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len > 0 && ft_strchr(set, s1[len]))
		len--;
	trimmed_str = ft_substr(s1, 0, len + 1);
	if (!trimmed_str)
		return (NULL);
	return (trimmed_str);
}

/*
#include <stdio.h>

int main() {
    const char *s1 = "   hello world   ";
    const char *set = " ";

    char *trimmed_str = ft_strtrim(s1, set);

    if (trimmed_str != NULL) {
        printf("Cadena original: \"%s\"\n", s1);
        printf("Cadena recortada: \"%s\"\n", trimmed_str);

        free(trimmed_str);
    } else {
        printf("Error: La función ft_strtrim devolvió NULL.\n");
    }

    return (0);
}
*/
