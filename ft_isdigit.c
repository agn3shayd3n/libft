/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:03:19 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/04 14:28:29 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// from 0 to 9
int	ft_isdigit(int i)
{
	if (!(i >= '0' && i <= '9'))
	{
		return (0);
	}
	return (1);
}

/*

int main()
{
    char c = '7';
	if (ft_isdigit(c))
		printf("%c es un dígito.\n", c);
	else
		printf("%c no es un dígito.\n", c);

    return (0);
}
*/