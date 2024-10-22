/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:16:01 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 13:01:50 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// takes a substring from 's', starting at 'start' for 'len' characters
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	k;
	char	*str;

	if (!s)
		return (NULL);
	if (start >= (size_t)ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (start + len > (size_t)ft_strlen(s))
		len = (size_t)ft_strlen(s) - start;
	i = start;
	k = 0;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (k < len)
	{
		str[k] = s[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *s = "Hello, world!";
    unsigned int start = 7;
    size_t len = 5;

    char *sub_str = ft_substr(s, start, len);

    if (sub_str != NULL) {
        printf("Subcadena: \"%s\"\n", sub_str);

        free(sub_str);
    } else {
        printf("Error: La función ft_substr devolvió NULL.\n");
    }

    return (0);
}
*/
