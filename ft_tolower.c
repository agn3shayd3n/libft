/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:18:37 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/05 13:02:25 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// converts char to lowercase
int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
	{
		return (i + 32);
	}
	return (i);
}

/*
#include <stdio.h>

int main() {
    int c = 'H';

    int lower_c = ft_tolower(c);

    printf("Carácter original: %c\n", c);
    printf("Carácter en minúscula: %c\n", lower_c);

    return (0);
}
*/
