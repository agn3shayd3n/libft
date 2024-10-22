/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:34:26 by agnesgar          #+#    #+#             */
/*   Updated: 2024/04/07 16:05:04 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// applies f function to everything in current list
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*next_node;

	if (!lst || !f)
		return ;
	while (lst)
	{
		next_node = lst->next;
		f(lst->content);
		lst = next_node;
	}
}

/*
void print_content(void *content) {
    printf("%s\n", content);
}

int main()
{
    t_list *node1 = ft_lstnew(ft_strdup("Nodo 1"));
    t_list *node2 = ft_lstnew(ft_strdup("Nodo 2"));
    t_list *node3 = ft_lstnew(ft_strdup("Nodo 3"));

    t_list *head = node1;
    node1->next = node2;
    node2->next = node3;

    ft_lstiter(node1, print_content);
    ft_lstiter(node2, print_content);
    ft_lstiter(node3, print_content);

    ft_lstclear(&head, free);

    return (0);
}
*/
