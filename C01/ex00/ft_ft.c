/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:11:01 by ampjimen          #+#    #+#             */
/*   Updated: 2023/07/06 17:11:05 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
#include <stdio.h>

int	main(void)
{
	int *nbr;
	int number;

	nbr = &number;
	ft_ft(nbr);
	printf("%d", number);
}*/