/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:04:33 by fflamion          #+#    #+#             */
/*   Updated: 2024/06/02 16:09:52 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(const char **format, va_list args)
{
	int	count;

	count = 0;
	if (**format == 'd' || **format == 'i')
		count = ft_putnbr(va_arg(args, int));
	else if (**format == 's')
		count = ft_putstr(va_arg(args, char *));
	else if (**format == 'p')
		count = ft_putpointer(va_arg(args, void *));
	else if (**format == 'c')
		count = ft_putchar((char)va_arg(args, int));
	else if (**format == 'u')
		count = ft_putnbr_u(va_arg(args, unsigned int));
	else if (**format == 'x')
		count = ft_putnbr_hex(va_arg(args, unsigned int), 0);
	else if (**format == 'X')
		count = ft_putnbr_hex(va_arg(args, unsigned int), 1);
	else if (**format == '%')
		count = ft_putchar('%');
	else
		count = ft_putchar(**format);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	size_t		count;
	va_list	args;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += handle_format(&format, args);
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
/*
int main(void) {
	int ret;

	ret = 42;

//	// Test integer formats: %d and %i
//	ret = ft_printf("%i\n", 214);
//	printf("Return: %d\n", ret);
//	printf("Expected: %d\n", printf("%i\n", 214));

//	// Test string format: %s
//	ret = ft_printf("%s\n", "ceci est un string");
//	printf("Return: %d\n", ret);
//	printf("Expected: %d\n", printf("%s\n", "ceci est un string"));

	// Test pointer format: %p
	int n = 4242;
	printf("\n");
	printf("Return : %d\n",ft_printf("%p\n", (void *)&n));
	printf("\n");
	printf("Expected: %d\n", printf("%p\n", (void *)&n));
	printf("\n");

//	// Test character format: %c
//	ret = ft_printf("%c%c%c\n", 'A', 'B', 'D');
//	printf("Return: %d\n", ret);
//	printf("Expected: %d\n", printf("%c%c%c\n", 'A', 'B', 'D'));

//	// Test unsigned integer format: %u
//	ret = ft_printf("%u\n", 20);
//	printf("Return: %d\n", ret);
//	printf("Expected: %d\n", printf("%u\n", 20));

//	// Test hexadecimal formats: %x and %X
//	ret = ft_printf("%x\n", 23);
//	printf("Return: %d\n", ret);
//	printf("Expected: %d\n", printf("%x\n", 23));

//	ret = ft_printf("%X\n", 23);
//	printf("Return: %d\n", ret);
//	printf("Expected: %d\n", printf("%X\n", 23));

//	// Test percent sign: %%
//	ret = ft_printf("%%\n");
//	printf("Return: %d\n", ret);
//	printf("Expected: %d\n", printf("%%\n"));

    return 0;
}
*/