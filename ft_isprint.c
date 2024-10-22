/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:20:22 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/04 14:29:51 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// printable chars from 32 to 126
int	ft_isprint(int i)
{
	if (!(i >= 32 && i <= 126))
	{
		return (0);
	}
	return (1);
}

/*
int main()
{
    char c = 'I';
	if (ft_isprint(c))
		printf("%c es imprimible.\n", c);
	else
		printf("%c no es imprimible.\n", c);

    return (0);
}
*/