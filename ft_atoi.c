/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:34:26 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/04 13:47:24 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ascii a int
int	ft_atoi(const char *str)
{
	int	i;
	int	count;
	int	sign;

	i = 0;
	count = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		count = (str[i] - '0') + (count * 10);
		i++;
	}
	return (sign * count);
}

/*
int main()
{
    const char *str = "   -12345";
    int result = ft_atoi(str);
    printf("El resultado de convertir \"%s\" a entero es: %d\n", str, result);
    return (0);
}
*/