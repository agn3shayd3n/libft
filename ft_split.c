/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:49:02 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 12:39:20 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// frees memory allocated for each of the strings in array given
static void	freestr(char **strings)
{
	int	i;

	i = 0;
	while (strings[i])
	{
		free(strings[i]);
		i++;
	}
	free(strings);
}

// counts number of divisions in string, split by char 'c'
static long	countwords(char const *str, char c)
{
	long	i;
	long	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

// writes divided string in 'result', or returns NULL if failed
static	char	**write_split(char const *s, char c, char	**result)
{
	size_t	start;
	size_t	i;
	size_t	word;

	start = 0;
	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			result[word] = ft_substr(s, start, i - start + 1);
			if (!result[word])
			{
				freestr(result);
				return (0);
			}
			word++;
		}
		if (s[i] == c && (s[i + 1] != c || s[i + 1] != '\0'))
			start = i + 1;
		i++;
	}
	result[word] = 0;
	return (result);
}

// calls write_split & returns array of strings
char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (countwords(s, c) + 1));
	if (!result)
		return (NULL);
	result = write_split(s, c, result);
	return (result);
}

/*
#include <stdio.h>

int main()
{
    // Definir una cadena
    char str[] = "Hello,world,this,is,an,example";

    char **result = ft_split(str, ',');

    if (!result) {
        printf("Error: No se pudo dividir la cadena.\n");
        return (1);
    }

    printf("Subcadenas resultantes:\n");
    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
    }

    freestr(result);

    return (0);
}
*/
