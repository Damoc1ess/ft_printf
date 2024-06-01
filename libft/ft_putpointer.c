/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:28:47 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/31 18:16:03 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putpointer(void *ptr)
{
	unsigned long	add;

	add = (unsigned long)ptr;
	ft_putstr("0x");
	ft_putnbr_hex(add, 0);
}
