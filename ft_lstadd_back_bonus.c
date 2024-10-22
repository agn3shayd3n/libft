/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:34:26 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/07 14:23:00 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// add node last place
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
}

/*
#include <stdio.h>

int main() 
{
    t_list *head = NULL;

    t_list *node1 = ft_lstnew(ft_strdup("Nodo 1"));
    t_list *node2 = ft_lstnew(ft_strdup("Nodo 2"));
    t_list *node3 = ft_lstnew(ft_strdup("Nodo 3"));

    ft_lstadd_back(&head, node1);
    ft_lstadd_back(&head, node2);
    ft_lstadd_back(&head, node3);

    t_list *current = head;
    while (current != NULL)
	{
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    ft_lstclear(&head, free);
}
*/
