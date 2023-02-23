/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 20:10:25 by yachen            #+#    #+#             */
/*   Updated: 2023/02/23 14:13:02 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] == src[i] && dest[i])
		i++;
	return(dest[i] - src[i]);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	n;
	int	j;
	char	buffer;

	n = 1;
	while (n <= argc - 1)
	{
		i = 1;
		while(i <= argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				buffer = *argv[i];
				*argv[i] = *argv[i + 1];
				*argv[i + 1] = *argv[i];
			}
			i++;
		}
		n++;
	}
	j = 1;
	while (argv[j])
	{
		ft_putstr(argv[j]);
		ft_putstr("\n");
		j++;
	}
	return(0);
}
