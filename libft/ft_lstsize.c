/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:14:58 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/27 15:35:03 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	t_list *lst = NULL;

	printf("The size of the list :%d\n", ft_lstsize(lst));

	// create a list with one element
	 int value1 = 12;
  	t_list *node1;
	node1 = ft_lstnew(&value1);
  	lst = node1;
	printf("The size of the list :%d\n", ft_lstsize(lst));

	int	value2 = 42;
	t_list	*node2;
	node2 = ft_lstnew(&value2);
	node1->next = node2;
	printf("The size of the list :%d\n", ft_lstsize(lst));
}
*/