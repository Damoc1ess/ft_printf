/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:28:47 by fflamion          #+#    #+#             */
/*   Updated: 2024/06/02 19:29:52 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putpointer(void *ptr)
{
	unsigned long long		ret;
	int						i;

	i = 0;
	ret = (unsigned long long)ptr;
	if (!ptr)
		return (ft_putstr("(nil)"));
	if (ret > 15)
		i = ft_putpointer((void *)(ret / 16));
	else
	{
		ft_putstr("0x");
		i += 2;
	}
	ft_putchar("0123456789abcdef"[ret % 16]);
	return (++i);
}
/*
int main(void)
{
    int num = 42;
    float dec = 4.42;
    char str = 'A';

    ft_putpointer(&num);
    printf("\n");
    printf("Adresse de num avec printf: %p\n", (void *)&num);

    ft_putpointer(&dec);
    printf("\n");

    ft_putpointer(&str);
    printf("\n");

    return 0;
}
*/