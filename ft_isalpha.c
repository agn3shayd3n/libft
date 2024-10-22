/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:55:05 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/04 14:26:58 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// from a to z && A to Z
int	ft_isalpha(int i)
{
	if (!((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')))
	{
		return (0);
	}
	return (1);
}
/*
int main()
{
    char c = 'K';
	if (ft_isalpha(c))
		printf("%c es una letra del alfabeto.\n", c);
	else
		printf("%c no es una letra del alfabeto.\n", c);

    return (0);
}
*/