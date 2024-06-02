/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:57:28 by fflamion          #+#    #+#             */
/*   Updated: 2024/06/02 14:43:49 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_u(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
		i += ft_putnbr_u(n / 10);
	i += ft_putchar((n % 10) + '0');
	return (i);
}
/*
int	main(void)
{
	printf("%u\n", -1);
	ft_putnbr_u(-1);
	printf("\n");
	printf("%d\n", ft_putnbr_u(-1));
}
*/