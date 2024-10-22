/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:10:54 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/04 14:26:06 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// from a to z && A to Z && 0 to 9
int	ft_isalnum(int i)
{
	if (!((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')
			|| (i >= '0' && i <= '9')))
	{
		return (0);
	}
	return (1);
}
/*
int ft_isalnum(int i);

int main()
{
    char c = '3';
	if (ft_isalnum(c))
		printf("%c es alfanumérico.\n", c);
	else
   		printf("%c no es alfanumérico.\n", c);

    return (0);
}
*/