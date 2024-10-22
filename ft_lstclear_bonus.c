/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:34:26 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/07 16:22:43 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// deletes all content from list
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	if (!*lst)
		return ;
	while (*lst)
	{
		next_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_node;
	}
}

/*
void del(void *content) {
	if (content)
        free(content);
}

int main()
{
    t_list *head = NULL;

    t_list *node1 = ft_lstnew(ft_strdup("Nodo 1"));
    t_list *node2 = ft_lstnew(ft_strdup("Nodo 2"));
    t_list *node3 = ft_lstnew(ft_strdup("Nodo 3"));

    ft_lstadd_back(&head, node1);
    ft_lstadd_back(&head, node2);
    ft_lstadd_back(&head, node3);

	ft_lstclear(&head, free);

    return (0);
}
*/
