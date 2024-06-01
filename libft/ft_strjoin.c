/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:15:02 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/22 14:31:07 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*strjoin;

	if (!s1 || !s2)
		return (NULL);
	strjoin = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!strjoin)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		strjoin[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		strjoin[i + j] = s2[j];
		j++;
	}
	strjoin[i + j] = '\0';
	return (strjoin);
}
/*
int main()
{
    const char *s1 = "Hello";
    const char *s2 = " World";
    char *result = ft_strjoin(s1, s2);
    if (result == NULL)
    {
        printf("Erreur : l'allocation de mémoire a échoué\n");
        return 1;
    }
    printf("Résultat de la concaténation : %s\n", result);
    free(result);
    return 0;
}
*/