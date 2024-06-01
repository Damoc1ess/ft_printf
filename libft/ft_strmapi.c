/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:58:14 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/25 14:38:02 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char my_transform_function(unsigned int index, char c) {
    if (index % 2 == 0) {
        return ft_toupper(c);
    } else {
        return ft_tolower(c);
    }
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	if (!*s || !*f)
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int main() {
    char *str = "Hello World";
    char *result = ft_strmapi(str, my_transform_function);
    if (result) {
        printf("Original: %s\n", str);
        printf("Modified: %s\n", result);
        free(result);
    }
    return 0;
}
*/