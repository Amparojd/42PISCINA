/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:25:02 by ampjimen          #+#    #+#             */
/*   Updated: 2023/07/08 14:25:06 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size -1 - i] = tmp;
		i++;
	}
}

#include <stdio.h>

int main(void)
{
    int tab[6] = {6, 1, 7, 3, 9, 5};
    int size = 6;

    ft_rev_int_tab(tab, size);
    printf ("%d", tab[0]);
    printf ("%d", tab[1]);
    printf ("%d", tab[2]);
    printf ("%d", tab[3]);
    printf ("%d", tab[4]);
	printf("%d", tab[5]);
}