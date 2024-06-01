/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:51:19 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/25 22:23:27 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
   void my_transform_function(unsigned int index, char *c)
   {
   if (index % 2 == 0)
 *c = ft_toupper(*c);
 else
 *c = ft_tolower(*c);
 }
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
   int main()
   {
   char str[] = "abcdef";
   printf("Original string: %s\n", str);

   ft_striteri(str, my_transform_function);

   printf("Transformed string: %s\n", str);

   return 0;
   }
   */
