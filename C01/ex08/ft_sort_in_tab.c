/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:34:10 by ampjimen          #+#    #+#             */
/*   Updated: 2023/07/08 16:34:15 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	search;
	int	swap;

	while (size >= 0)
	{
		search = 0;
		while (search < size - 1)
		{
			if (tab[search] > tab[search + 1])
			{
			swap = tab[search];
			tab[search] = tab[search + 1];
			tab[search + 1] = swap;
			}
		search++;
		}
	size--;
	}
}

#include <stdio.h>
int main(void)
{
    int tab[5] = {6, 1, 7, 3, 9};
    int size = 5;

    ft_sort_int_tab(tab, size);
    printf ("%d", tab[0]);
    printf ("%d", tab[1]);
    printf ("%d", tab[2]);
    printf ("%d", tab[3]);
    printf ("%d", tab[4]);
    return(0);
}