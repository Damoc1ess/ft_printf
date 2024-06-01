/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:42:24 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/23 11:57:07 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		ncpy;
	int		i;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ncpy = n;
	if (n < 0)
		ncpy = -n;
	i = int_len(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	if (ncpy == 0)
		str[i] = '0';
	while (ncpy > 0)
	{
		str[i--] = (ncpy % 10) + '0';
		ncpy /= 10;
	}
	if (n < 0)
		str[i] = '-';
	return (str);
}
/*
int main(void)
{
	int test_values[] = {0, 1, -1, 42, -42
	, 123456, -123456, 2147483647, -2147483648};
	int num_tests = sizeof(test_values) / sizeof(test_values[0]);
	char *result;

	for (int i = 0; i < num_tests; i++) {
		result = ft_itoa(test_values[i]);
		if (result) {
			printf("ft_itoa(%d) = %s\n", test_values[i], result);
			free(result);
		} else {
			printf("ft_itoa(%d) failed to allocate memory.\n", test_values[i]);
		}
	}

	return 0;
}
*/