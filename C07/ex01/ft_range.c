/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:27:52 by yachen            #+#    #+#             */
/*   Updated: 2023/02/24 12:19:45 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <unistd.h>
//#include <stdio.h>
int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 1;
	tab = (int *)malloc(sizeof (*tab) * (max - min));
	tab[0] = min;
	if (min >= max)
		return (0);
	while (i < max - min)
	{
		tab[i] = tab[0] + i;
		i++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	*tab;
	int	i;

	i = 0;
	tab = ft_range(30, 40);
	while (tab[10])
	{
		printf("%d", tab[10]);
		printf("\n");
		i++;
	}
	return (0);
}*/
