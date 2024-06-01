/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:57:28 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/24 17:31:03 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int	fd_text;

	fd_text = open("text", O_WRONLY | O_CREAT);
	ft_putchar_fd('a', 0);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('b', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('c', fd_text);
	close(fd_text);
}
*/