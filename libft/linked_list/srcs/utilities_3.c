/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:39:16 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/10 14:44:43 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../_include/linkedlist.h"

int	ft_lstsize(t_node *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->link_next;
		i++;
	}
	return (i);
}

void	ft_lstclear(t_node **head, void (*del)(void*))
{
	t_node	*ptr;

	ptr = *head;
	while (ptr)
	{
		ptr = ptr->link_next;
		ft_lstdelone(*head, del);
		*head = ptr;
	}
	head = NULL;
}

void	ft_lstdelone(t_node *lst, void (*del)(void*))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
	return ;
}
