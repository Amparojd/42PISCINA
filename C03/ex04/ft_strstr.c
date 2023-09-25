/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:37:17 by ampjimen          #+#    #+#             */
/*   Updated: 2023/07/17 14:19:54 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (to_find[x] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + x] == to_find[x] && str[i + x] != '\0')
		{
			x++;
			if (to_find[x] == '\0')
				return (str + i);
		}
		i++;
		x = 0;
	}
	return (0);
}

/*int	main(void)
 {

         char        str[] = "si es que funciona";
         char        to_find[] = "que";
         printf("%s", ft_strstr(str, to_find));
 }*/