/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:00:17 by yachen            #+#    #+#             */
/*   Updated: 2023/02/23 17:24:30 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	p;

	p = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * p;
		power--;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(, 0));
	printf("%d\n", ft_iterative_power(0, -1));
	return (0);
}*/
