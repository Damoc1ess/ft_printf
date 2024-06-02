/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:49:42 by fflamion          #+#    #+#             */
/*   Updated: 2024/06/02 14:31:22 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>


int	ft_putnbr(int n)
{
    char c;
    int count = 0;
    unsigned int num = (n < 0) ? -n : n;

    if (n < 0) {
        write(1, "-", 1);
        count++;
    }

    if (num >= 10)
        count += ft_putnbr(num / 10);

    c = num % 10 + '0';
    write(1, &c, 1);
    count++;

    return count;
}
/*
int	main(void)
{
	int	i;

	i = 123456789;
	printf("%d \n", ft_putnbr(i));
}
*/