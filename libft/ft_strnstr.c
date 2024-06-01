/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:46:05 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/22 13:48:39 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;
	char	*biggest;

	i = 0;
	biggest = (char *)big;
	n_len = ft_strlen(little);
	if (n_len == 0 || big == little)
		return (biggest);
	while (biggest[i] != '\0' && i < len)
	{
		j = 0;
		while (biggest[i + j] != '\0' && little[j] != '\0'
			&& biggest[i + j] == little[j] && i + j < len)
			j++;
		if (j == n_len)
			return (biggest + i);
		i++;
	}
	return (0);
}
