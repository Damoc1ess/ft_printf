/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:19:17 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/27 18:19:18 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
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

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main()
{
    t_list *list = NULL;
    t_list *node1;
    t_list *node2;

    node1 = malloc(sizeof(t_list));
    node2 = malloc(sizeof(t_list));

    if (!node1 || !node2)
    {
        printf("malloc memory allocation fail");
        return 1;
    }

    node1->content = malloc(sizeof(int));
    node2->content = malloc(sizeof(int));

    if (!node1->content || !node2->content)
    {
        printf("malloc memory allocation fail");
        return 1;
    }

    *(int *)(node1->content) = 1;
    *(int *)(node2->content) = 2;

    printf("Liste avant l'ajout :\n");
    print_list(list);

    ft_lstadd_front(&list, node1);

    printf("Liste après l'ajout du premier élément :\n");
    print_list(list);

    ft_lstadd_front(&list, node2);

    printf("Liste après l'ajout du deuxième élément :\n");
    print_list(list);

    free(node1->content);
	free(node2->content);
	free(node1);
	free(node2);


    return 0;
}
*/