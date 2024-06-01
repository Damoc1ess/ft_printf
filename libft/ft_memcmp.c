/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:46:21 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/21 17:09:47 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
void	run_test(const char *s1, const char *s2, size_t n)
{
    int result_ft = ft_memcmp(s1, s2, n);
    int result_libc = memcmp(s1, s2, n);

    printf("ft_memcmp(\"%s\", \"%s\", %zu) = %d\n", s1, s2, n, result_ft);
    printf("memcmp(\"%s\", \"%s\", %zu) = %d\n", s1, s2, n, result_libc);
    printf("Result: %s\n\n", (result_ft == result_libc) ? "PASS" : "FAIL");
}

int main(void)
{
    run_test("testt", "testt", 5);
    run_test("testa", "testb", 4);
    run_test("test", "testing", 7);
    run_test("test", "testing", 0);
    run_test("", "", 1);
    run_test("abc", "xyz", 3);
    run_test("abcdef", "abcxyz", 3);
    return 0;
}
*/