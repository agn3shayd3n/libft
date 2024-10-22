/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:34:26 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/07 13:29:56 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locates the first occurence of 'c' (unsigned char) in string 's'.
// returns a ptr to the byte located or NULL.
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char) c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

/*
int main()
{
    unsigned char buffer[] = {0, 1, 2, 3, 4, 5, 6, 7};
    size_t n = sizeof(buffer);

    int byte_to_find = 5;
    void *result  = ft_memchr(buffer, byte_to_find, n);
	if (!result)
		return (1);
	if (result != NULL) {
        printf("El byte %d fue encontrado en la pos %p\n", byte_to_find, result);
    } else {
        printf("El byte %d no fue encontrado.\n", byte_to_find);
    }
	return (0);

}
*/
