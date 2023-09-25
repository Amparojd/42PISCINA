/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:31:25 by ampjimen          #+#    #+#             */
/*   Updated: 2023/07/24 17:26:03 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[x] != '\0' && nb > 0)
	{
		dest[i] = src[x];
			i++;
			x++;
			nb--;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
 int        main(void)
 {
         char        dest[] = "hola";
         char        src[] = " adios";
         printf("%s", ft_strncat(dest, src, 2));
 }