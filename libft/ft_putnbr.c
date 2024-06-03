/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 01:56:14 by fflamion          #+#    #+#             */
/*   Updated: 2024/06/03 01:57:54 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	char			c;
	int				i;
	unsigned int	num;

	num = n;
	i = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		num = -num;
		i++;
	}
	if (num >= 10)
		i += ft_putnbr(num / 10);
	c = num % 10 + '0';
	i += write(1, &c, 1);
	return (i);
}
/*
int	main(void)
{
	int	i;

	i = 123456789;
	printf("%d \n", ft_putnbr(i));
}
*/