/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:34:20 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/04 14:27:47 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// from 0 to 127 in ascii
int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
	{
		return (1);
	}
	return (0);
}

/*

int main()
{
    char c = 'K';
	if (ft_isascii(c))
		printf("%c es ascii.\n", c);
	else
		printf("%c no es ascii.\n", c);

    return (0);
}
*/