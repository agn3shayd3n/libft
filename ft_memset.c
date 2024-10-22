/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:31:39 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/04 14:53:09 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//  writes len byt of value c converted to an u. char to the string b
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*i;

	i = (unsigned char *)b;
	while (len > 0)
	{
		*i = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}

/*
int main() {
    char buffer[20];

    ft_memset(buffer, 42, sizeof(buffer));

    printf("Contenido del bloque de memoria:\n");
    for (size_t i = 0; i < sizeof(buffer); i++) {
        printf("%d ", buffer[i]);
    }
    return (0);
}
*/
