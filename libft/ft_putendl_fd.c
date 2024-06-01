/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:04:01 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/24 17:15:18 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
/*
   int main(void)
   {
   int fd_text;
   char *str;

   str = "Il est lent ce lait!!!";
   fd_text = open("test",O_CREAT | O_RDWR);
   if (fd_text == -1)
   return 1;
   ft_putendl_fd(str, fd_text);
   return 0;
   }
   */
