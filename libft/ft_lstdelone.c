/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 21:58:16 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/27 19:03:57 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
/*
void del(void *content)
{
    free(content);
}

int main(void)
{
    // creat new lst
    t_list *head;
    int *value;

    value = malloc(sizeof(int));
    if (!value)
        return 1;
    *value = 42;
    head = ft_lstnew(value);
    if (!head)
    {
        free(value);
        return 1;
    }
    printf("Content before deletion: %d\n", *(int *)head->content);
    ft_lstdelone(head, del);
    printf("Content after deletion: %d\n", *(int *)head->content);
    return 0;
}
*/