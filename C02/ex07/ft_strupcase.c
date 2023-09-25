/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:44:52 by ampjimen          #+#    #+#             */
/*   Updated: 2023/07/10 15:44:56 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
			i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char a[]= "hola mundo";

	
	printf("%s", ft_strupcase(a));
}*/