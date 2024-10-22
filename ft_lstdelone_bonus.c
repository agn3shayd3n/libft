/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:34:26 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/07 14:14:46 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// deletes one node and its content
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	else
	{
		if (del)
			del(lst->content);
		else
			free(lst->content);
		free(lst);
	}
}

/*
void del(void *content)
{
    free(content);
}

int	main()
{
    t_list *node = ft_lstnew(ft_strdup("Nodo 1"));

	printf("Node content: %s\n", (char *)node->content);

	ft_lstdelone(node, del);
	node = NULL;

	if (!node)
		printf("%s\n", "node deleted succesfully");
	else
		printf("%s\n", "error deleting node.");

	return (0);
}
*/