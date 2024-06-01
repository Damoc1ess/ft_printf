/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:08:47 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/27 16:22:13 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
/*
int	main(void)
{
	t_list	*head;

	head = NULL;

	t_list *last;

	last = ft_lstlast(head);
	if (last == NULL)
	{
    		printf("Empty list: ft_lstlast returned NULL (expected)\n");
  	}
	else
	{
   		printf("Error: ft_lstlast returned a node for an empty list\n");
  	}

	int	value1;
	t_list *node1;

	value1 = 42;
	node1 = ft_lstnew(&value1);
	head = node1;

	last = ft_lstlast(head);
	  if (last == node1)
	{
    		printf("Empty list: ft_lstlast returned NULL (expected)\n");
  	}
	else
	{
   		printf("Error: ft_lstlast returned a node for an empty list\n");
  	}
}
*/