/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:24:02 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/10 14:45:13 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKEDLIST_H
# define LINKEDLIST_H

#include <stdlib.h>

typedef struct s_node
{
	void			*content;
	struct s_node	*link_next;
}	t_node;

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * create_node_4.c*/

/*Allocate Memory, return a new linked list.                            */
t_node	*ft_lstnew(void *content);

/*Add new element in front of the list.
	head: Memory adress of the first element of the list.
	new: Memory adress of new element to add in front.          */
void	ft_lstadd_front(t_node **head, t_node *new);

/*Add new Element at the end of the list.
	head: memory adress of the first element of the list.
	new: memory adress of the new element to add.         */
void	ft_lstadd_back(t_node **head, t_node *new);

/*Return the last element of the file (info)
	head:start of the list.                           */
t_node	*ft_lstlast(t_node *head);

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * utilities_3.c*/

/*Delete (del) and (free) memory space of the element(s)++ in param.
	Initial ptr (lst) == at NULL
	head: Memory adress of an element.
	del: memory adress of the func. that can delete content of an element.*/
void	ft_lstclear(t_node **head, void (*del)(void*));

/*Count nbr of elements on the list                                     */
int		ft_lstsize(t_node *lst);

/*Free Memory of the element in arg.While using del function and free.
	Memory of next should'nt be free. 
	lst: Element to free
	del: Memory adress that can delete the content of the element.*/

void	ft_lstdelone(t_node *lst, void (*del)(void*));

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * curl_action_2.c */

/*Iteration on list ’lst’ and apply function ’f ’
	Function ’del’ there to delete content if needed.
	lst: memory Adress of an element.
	f: Memory adress of a function.. 
	del: Memory adress to delete content.                              */
t_node *ft_lstmap(t_node *lst, void *(*f)(void *), void (*del)(void *));

/*Iteration on linked list 'lst' and apply function f on each elements.
lst: Memory adress of an element.
f: Memory adress of a function to activate the iteration.         */
void	ft_lstiter(t_node *lst, void (*f)(void *));

#endif