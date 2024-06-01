/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:09:43 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/27 18:19:38 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*next;

	next = *alst;
	while (next)
	{
		if (next->next == NULL)
		{
			next->next = new;
			return ;
		}
		next = next->next;
	}
	*alst = new;
}
/*
void	print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("%d\n", *(int *)list->content);
		list = list->next;
	}
}

int main(void) {
  // Create an empty list
  t_list *head = NULL;

  // Create some new elements to add
  int value1 = 10;
  t_list *node1 = ft_lstnew(&value1);

  int value2 = 20;
  t_list *node2 = ft_lstnew(&value2);

  // Print the list before adding nodes (optional)
  printf("List before adding nodes:\n");
  print_list(head); // Implement your print_list function

  // Add elements to the list using ft_lstadd_back
  ft_lstadd_back(&head, node1);
  ft_lstadd_back(&head, node2);

  // Print the list after adding nodes
  printf("List after adding nodes:\n");
  print_list(head);

  return (0);
}
*/