/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:24:41 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/25 15:27:43 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (--size && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*
int main() {
    char src[] = "Hello, World!";
    char dst1[20];
    char dst2[20];
    size_t size1, size2;

    size1 = strlcpy(dst1, src, sizeof(dst1));
    printf("strlcpy:\n");
    printf("  Source: %s\n", src);
    printf("  Dest %s\n", dst1);
    printf("  len %zu\n", size1);

    size2 = ft_strlcpy(dst2, src, sizeof(dst2));
    printf("ft_strlcpy:\n");
    printf("  Source: %s\n", src);
    printf("  Dest %s\n", dst2);
    printf("  len %zu\n", size2);

    if (size1 == size2 && strcmp(dst1, dst2) == 0) {
        printf("good\n");
    } else {
        printf("not good\n");
    }

    return 0;
}
*/