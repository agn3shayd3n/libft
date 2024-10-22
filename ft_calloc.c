/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:16:30 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/04 14:12:46 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// new memory block set to 0 and x bytes each
void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
int main()
{
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    int *array = (int *)ft_calloc(num_elements, element_size);
    if (!array)
	{
        printf("Error: No se pudo asignar memoria.\n");
        return (1);
    }

    for (size_t i = 0; i < num_elements; i++) {
        printf("array[%zu] = %d\n", i, array[i]);
    }

    free(array);

    return (0);
}
*/