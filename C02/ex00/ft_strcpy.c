/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:58:56 by ampjimen          #+#    #+#             */
/*   Updated: 2023/07/09 11:59:01 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char a[] = "mur";
	char b[12] = "quétalestas";
	
	ft_strcpy(a, b);
	printf("%s", ft_strcpy(a, b));
	printf("\n");
	printf("%s", strcpy(a, b));
}