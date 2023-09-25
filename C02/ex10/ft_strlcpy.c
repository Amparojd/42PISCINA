/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:11:51 by ampjimen          #+#    #+#             */
/*   Updated: 2023/07/11 16:11:54 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	x = 0;
	i = 0;
	while (src[x])
		x++;
	if (size < 1)
		return (x);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
			i++;
	}
	dest[i] = '\0';
	return (x);
}

#include <stdio.h>
#include <string.h>
int        main(void)
 {
         char        src[] = "kuKU";
         char        dest[] = "kukujenrcjenc";
        printf("%d | %s", ft_strlcpy(dest, src, 4), dest);
        printf("\n");
        printf("%d | %s", (int) strlcpy(dest, src, 4), dest);
}