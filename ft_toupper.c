/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:16:44 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 13:02:54 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// converts char to uppercase
int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		return (i - 32);
	}
	return (i);
}

/*
#include <stdio.h>

int main() {
    int c = 'h';

    int upper_c = ft_toupper(c);

    printf("Carácter original: %c\n", c);
    printf("Carácter en mayúscula: %c\n", upper_c);

    return (0);
}
*/
