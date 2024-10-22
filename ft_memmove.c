/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:38:06 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/04 14:52:03 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Moves 'n' bytes from 'src' to 'dst' safely handling overlaps
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	i = 0;
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	else
	{
		if (ptr_src < ptr_dst)
		{
			while (++i <= len)
				ptr_dst[len - i] = ptr_src[len - i];
		}
		else
		{
			while (len--)
				*ptr_dst++ = *ptr_src++;
		}
		return (dst);
	}
}

/*
int main() {
    char src[] = "lalalala!";
    
    // Definir destino con suficiente espacio para copiar src
    char dest[50];

    ft_memmove(dest, src, sizeof(src));

    // Imprimir contenido de dest
    printf("dest: %s\n", dest);

    return (0);
}
*/