/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node_4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:22:13 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/11 11:03:27 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../_include/linkedlist.h"

t_node	*ft_lstnew(void *content)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->content = content;
	new->link_next = NULL;
	return (new);
}

void	ft_lstadd_front(t_node **head, t_node *new)
{
	if (head && new)
	{
		new->link_next = *head;
		*head = new;
	}
	return ;
}

void	ft_lstadd_back(t_node **head, t_node *new)
{
	t_node	*tail;

	if (*head)
	{
		tail = ft_lstlast(*head);
		tail->link_next = new;
	}
	else
		*head = new;
}

t_node	*ft_lstlast(t_node *head)
{
	if (head == NULL)
		return (head);
	while (head->link_next != NULL)
		head = head->link_next;
	return (head);
}
