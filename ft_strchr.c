/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:22:18 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 12:40:13 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// finds first (!) 'c' in array && returns pointer to it
char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	uc;

	uc = ((unsigned char)c);
	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == uc)
			return ((char *)&str[i]);
		i++;
	}
	if (uc == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

/*
#include <stdio.h>

int main()
{
    char str[] = "Hello";
    
    // carácter a buscar
    char ch = 'o';

    char *result = ft_strchr(str, ch);

    if (result != NULL)
	{
        printf("El carácter '%c' se encuentra en: %ld\n", ch, result - str);
    } else
	{
        printf("El carácter '%c' no se encuentra en la cadena.\n", ch);
    }

    return (0);
}
*/
