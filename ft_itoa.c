/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:35:39 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/04 14:30:22 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int to ascii
static unsigned int	ft_size(int temp)
{
	unsigned int	len;

	len = 0;
	if (temp == 0)
		return (1);
	if (temp < 0)
		temp = -temp;
	while (temp != 0)
	{
		temp /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int					length;
	long				temp;
	char				*result;

	length = ft_size(n);
	temp = n;
	if (n < 0)
		length++;
	result = (char *)malloc(sizeof(char) * (length + 1));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		temp = -(long)n;
	}
	result[length] = '\0';
	if (n == 0)
		result[0] = '0';
	while (temp != 0)
	{
		result[--length] = (temp % 10) + 48;
		temp /= 10;
	}
	return (result);
}

/*
int	main(void)
{
	int test_values[] = {0, 42, -123, 987654321, -987654321};
	size_t num_tests = sizeof(test_values) / sizeof(test_values[0]);

	for (size_t i = 0; i < num_tests; i++)
	{
		int n = test_values[i];
		char *result = ft_itoa(n);
		if (result)
		{
			printf("ft_itoa(%d) = \"%s\"\n", n, result);
			free(result);
		}
		else
		{
			printf("ft_itoa(%d) failed: Mem allocation error\n", n);
		}
	}

	return (0);
}
*/