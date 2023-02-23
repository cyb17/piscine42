/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:58:59 by yachen            #+#    #+#             */
/*   Updated: 2023/02/12 19:32:31 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	j = 1;
	while (j <= size)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
				swap(&tab[i], &tab[i + 1]);
			i++;
		}
		j++;
	}
}
/* void	affiche(int *tab, int size)
{
	int	i;
	
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}

int main(void)
{
	int	tab1[8] = {51, 0, 2, 533, 4, 5, 69, 247};
	int	tab2[8] = {51, 0, 2, 533, 4, 5, 69, 247};
	int	tab3[8] = {51, 0, 2, 533, 4, 5, 69, 247};
	int	tab4[8] = {51, 0, 2, 533, 4, 5, 69, 247};
	
	printf("initial : ");
	affiche(tab1, 8);
	ft_sort_int_tab(tab1, 8);
	printf("\ntrie : ");
	affiche(tab1, 8);
	
	printf("\ninitial : ");
	affiche(tab2, 8);
	ft_sort_int_tab(tab2, 8);
	printf("\ntrie : ");
	affiche(tab2, 8);

	printf("\ninitial : ");
	affiche(tab3, 8);
	ft_sort_int_tab(tab3, 8);
	printf("\ntrie : ");
	affiche(tab3, 8);
	
	printf("\ninitial : ");
	affiche(tab4, 8);
	ft_sort_int_tab(tab4, 8);
	printf("\ntrie : \n");
	affiche(tab4, 8);

	return (0);
}*/
