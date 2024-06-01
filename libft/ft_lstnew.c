/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:43:06 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/26 11:53:16 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
/*
int	main(void)
{
	int	value;
	t_list	*node;

	value = 42;

	node = ft_lstnew(&value);

	if (node)
	{
		// give acces to node content 
		printf("content: %d\n", *(int *)(node->content));

		free(node);
	}
	else
   	{
        	printf("Memory allocation failed.\n");
	}

    return 0;


}	
*/