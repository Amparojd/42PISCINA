/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:32:50 by ampjimen          #+#    #+#             */
/*   Updated: 2023/07/10 16:32:52 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
			i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	ft_strlowcase (str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (x == 1)
				str[i] -= 32;
				x = 0;
		}
		else if (str[i] >= 48 && str[i] <= 57)
			x = 0;
		else
			x = 1;
			i++;
	}
	return (str);
}

/*#include <stdio.h>
 int        main(void)
 {
         char        str[] = "salut, comMent tu vas
		  ? 42mots quarante-deux; 
		 cinquante+et+un";
 
         printf("%s", ft_strcapitalize(str));
}*/