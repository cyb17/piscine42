/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:20:26 by yachen            #+#    #+#             */
/*   Updated: 2023/03/01 17:34:15 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	*range = tab;
	if (min >= max)
	{
		tab = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof (*tab) * (max - min));
	if (!tab)
		return (-1);
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	*tab;
	printf("%d", ft_ultimate_range(&tab, 30, 40));
	return (0);
}*/
