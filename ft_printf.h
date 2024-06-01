/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:32:57 by fflamion          #+#    #+#             */
/*   Updated: 2024/06/01 14:03:20 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"
# include <stdlib.h>

int			ft_printf(const char *, ...);
void		ft_putchar(char c);
void		ft_putnbr_hex(unsigned int n, int uppercase);
void		ft_putpointer(void *ptr);
int			ft_putstr(char *str);
void		ft_putnbr(int n);
void		ft_putnbr_u(unsigned int n);

#endif