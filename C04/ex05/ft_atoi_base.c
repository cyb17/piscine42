/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:21:54 by yachen            #+#    #+#             */
/*   Updated: 2023/02/26 16:40:18 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+' || ft_strlen(str) < 2
			|| str[i] > 126 || str[i] < 33)
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int			i;
	int			sign;
	long int	nbr;

	i = 0;
	sign = 0;
	nbr = 0;
	if (check_base(base))
	{
		while ((str[i] > 8 && str[i] < 14) || str[i] == 32
			|| str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign++;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			nbr = nbr * ft_strlen(base) + (str[i] - 48);
			i++;
		}
		if (sign % 2 != 0)
			nbr = nbr * (-1);
	}
	return (nbr);
}
/*
int	main(void)
{
	char str[] = "2147483647";
	char base[] = "0123456789";
	int	nbr;

	nbr = ft_atoi_base(str, base);
	printf("%d", nbr);
	return (0);
}*/
