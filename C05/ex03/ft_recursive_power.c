/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:00:56 by yachen            #+#    #+#             */
/*   Updated: 2023/02/23 13:41:12 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	p;

	p = nb;
	if (nb <= 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (p * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	printf("%d", ft_recursive_power(NB, 3));
	return (0);
}*/
