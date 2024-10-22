/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:34:26 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/07 13:52:59 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// add new node first place
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int main()
{
    t_list *head = NULL; // Iniciar la lista vacía

    t_list *node1 = ft_lstnew(ft_strdup("Nodo 1"));
    t_list *node2 = ft_lstnew(ft_strdup("Nodo 2"));
    t_list *node3 = ft_lstnew(ft_strdup("Nodo 3"));

    ft_lstadd_front(&head, node1);
    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node3);

    t_list *current = head;
    while (current != NULL)
	{
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    ft_lstclear(&head, free);
    return (0);
}
*/
