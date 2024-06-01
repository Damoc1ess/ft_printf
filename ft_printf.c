/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:04:33 by fflamion          #+#    #+#             */
/*   Updated: 2024/06/01 14:02:50 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_format(const char **format, va_list args, int *count)
{
	if (**format == 'd' || **format == 'i')
		ft_putnbr(va_arg(args, int));
	else if (**format == 's')
		ft_putstr(va_arg(args, char *));
	else if (**format == 'p')
		ft_putpointer(va_arg(args, void *));
	else if (**format == 'c')
		ft_putchar((char)va_arg(args, int));
	else if (**format == 'u')
		ft_putnbr_u(va_arg(args, unsigned int));
	else if (**format == 'x')
		ft_putnbr_hex(va_arg(args, unsigned int), 0);
	else if (**format == 'X')
		ft_putnbr_hex(va_arg(args, unsigned int), 1);
	else if (**format == '%')
		ft_putchar('%');
	else
		ft_putchar(**format);
	(*count)++;
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			handle_format(&format, args, &count);
		}
		else
		{
			ft_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
int	main(void)
{
	int	n = 42;
	char c = 'A';
	char *str = "ceci est un string";
	int	ret;

	// Test integer formats: %d and %i
	ret = ft_printf("%d, %i\n", 0);
	printf("Return: %d\n", ret);

	// Test string format: %s
	ret = ft_printf("%s\n", str);
	printf("Return: %d\n", ret);

	// Test pointer format: %p
	ret = ft_printf("%p\n", (void *)&n);
	printf("Return: %d\n", ret);

	// Test character format: %c
	ret = ft_printf("%c\n", c);
	printf("Return: %d\n", ret);

	// Test unsigned integer format: %u
	ret = ft_printf("%u\n", 20);
	printf("Return: %d\n", ret);

	// Test hexadecimal formats: %x and %X
	ret = ft_printf("%x\n", 23);
	printf("Return: %d\n", ret);
	ret = ft_printf("%X\n", 23);
	printf("Return: %d\n", ret);

	// Test percent sign: %%
	ret = ft_printf("%%\n");
	printf("Return: %d\n", ret);

	return 0;

}