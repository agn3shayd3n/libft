/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:34:26 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/07 13:31:16 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies 'n' bytes from 'src' to 'dst'
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;

	ptr_dst = dst;
	ptr_src = src;
	if (!ptr_dst && !ptr_src)
		return (dst);
	else
	{
		while (n--)
		{
			*ptr_dst = *ptr_src;
			ptr_dst++;
			ptr_src++;
		}
		return (dst);
	}
}

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t buffer_size = 10;

    unsigned char src_buffer[buffer_size];
    for (size_t i = 0; i < buffer_size; i++) {
        src_buffer[i] = i + '1'; // Datos de ejemplo
    }

    unsigned char dst_buffer[buffer_size];

    ft_memcpy(dst_buffer, src_buffer, buffer_size);

    printf("Datos copiados en el buffer de destino:\n");
    for (size_t i = 0; i < buffer_size; i++) {
        printf("%c ", dst_buffer[i]);
    }
    return (0);
}
*/
