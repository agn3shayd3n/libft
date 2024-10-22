/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agnesgar <agnesgar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:34:26 by agnesgar          #+#    #+#             */
/*   Updated: 2024/03/21 18:14:29 by agnesgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// applies f function to each element and returns new linked list
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*f_list;
	void	*f_content;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	f_list = NULL;
	while (lst)
	{
		f_content = f(lst->content);
		new_node = ft_lstnew(f_content);
		if (!new_node)
		{
			free(f_content);
			ft_lstclear(&f_list, del);
			return (NULL);
		}
		ft_lstadd_back(&f_list, new_node);
		lst = lst->next;
	}
	return (f_list);
}

/*
void free_string(void *content) {
    free(content);
}

void *print_content(void *content) {
    printf("%s\n", (char *)content);
	return (content);
}

int main()
{
    t_list *node1 = ft_lstnew(ft_strdup("Nodo 1"));
    t_list *node2 = ft_lstnew(ft_strdup("Nodo 2"));
    t_list *node3 = ft_lstnew(ft_strdup("Nodo 3"));

    t_list *head = node1;
    node1->next = node2;
    node2->next = node3;

	t_list *duplicated_list = ft_lstmap(head, &print_content, &free_string);

 	printf("Lista duplicada:\n");
    t_list *current = duplicated_list;
    while (current) {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    free(duplicated_list);
    ft_lstclear(&head, free);

    return (0);
}
*/