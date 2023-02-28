/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:20:42 by yachen            #+#    #+#             */
/*   Updated: 2023/02/21 14:13:03 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	change_hexa(unsigned char c)
{
	int		left;
	char	right;
	char	*hexa;

	hexa = "0123456789abcdef";
	left = hexa[c / 16];
	right = hexa[(c % 16)];
	write(1, "\\", 1);
	write(1, &left, 1);
	if (right <= 9)
	{
		right += 48;
		write(1, &right, 1);
	}
	else
		write(1, &right, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 31 && str[i] != 127)
			write(1, &str[i], 1);
		else
			change_hexa(str[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}*/
