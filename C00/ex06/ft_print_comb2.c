/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:35:18 by yachen            #+#    #+#             */
/*   Updated: 2023/02/09 19:31:13 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_number(int num1, int num2)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = (num1 / 10) + 48;
	b = (num1 % 10) + 48;
	c = (num2 / 10) + 48;
	d = (num2 % 10) + 48;
	write(1, &a, 1);
	write(1, &b, 1);
	ft_putchar(32);
	write(1, &c, 1);
	write(1, &d, 1);
	if (num1 != 98 || num2 != 99)
	{	
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;

	n1 = 0;
	n2 = 1;
	while (n1 < 99)
	{
		while (n2 < 100)
		{
			aff_number(n1, n2);
			n2++;
		}
		n1++;
		n2 = n1 + 1;
	}
}
