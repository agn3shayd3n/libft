/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:36:56 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 12:58:35 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locates the last (!) occurrence of c converted
// to a char in the string pointed to by s
char	*ft_strrchr(const char *str, int i)
{
	const char	*last;

	last = NULL;
	while (*str)
	{
		if (*str == (char)i)
			last = str;
		str++;
	}
	if ((char) i == '\0')
		return ((char *) str);
	return ((char *)last);
}

/*
#include <stdio.h>

int main()
{
    char str[] = "Hello";

    // carácter a buscar
    char ch = 'o';

    char *result = ft_strrchr(str, ch);

    if (result != NULL)
	{
        printf("El carácter '%c' está en última pos: %ld\n", ch, result - str);
    } else
	{
        printf("El carácter '%c' no se encuentra en la cadena.\n", ch);
    }

    return (0);
}
*/
