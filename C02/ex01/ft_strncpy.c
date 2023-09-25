/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:03:44 by ampjimen          #+#    #+#             */
/*   Updated: 2023/07/09 17:03:48 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>  
int main(void) {

  char dest[10] = "Luis";
  char src[10] = "hola";

  // Copia a temporal, lo que hay en nombre, pero solo copia 1 caracter
  strncpy(dest, src, 3);
  printf("Función strncpy:  %s", dest);

  printf("Función strncpy %s", ft_strncpy(dest, src, 3));
  return 0;
}*/