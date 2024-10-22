/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:14:14 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 12:55:37 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// applies f in each char of 's' and makes new array with it
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>

char to_uppercase(unsigned int index, char c)
{  
  	(void)index;	
    if (c >= 'a' && c <= 'z') {
        return c - 'a' + 'A';
    } else {
        return c;
    }
}

int main() {
    char str[] = "Hello";
    char *new_str;

    new_str = ft_strmapi(str, &to_uppercase);

    if (!new_str) {
        printf("Error: ft_strmapi devolvió NULL\n");
        return (1);
    }

    printf("Nuevo array: %s\n", new_str);

    free(new_str);

    return (0);
}
*/
