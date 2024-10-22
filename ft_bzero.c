/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:21:10 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/04 14:12:21 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// writes n zeroed bytes to the string s.
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*
#include <stdio.h>
int main()
{
    char str[10] = "Holi";
    printf("Antes de bzero: \"%s\"\n", str);

    ft_bzero(str, 4); // Pone los primeros 4 bytes a 0

    printf("Después de bzero: \"%s\"\n", str);
    return (0);
}
*/
