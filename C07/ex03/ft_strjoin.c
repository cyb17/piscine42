/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:11:25 by yachen            #+#    #+#             */
/*   Updated: 2023/03/01 12:21:24 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	ldest;

	i = 0;
	ldest = ft_strlen(dest);
	while (src[i])
	{
		dest[ldest + i] = src[i];
		i++;
	}
	dest[ldest + i] = '\0';
	return (dest);
}

int	size_of_malloc(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	return (len - ft_strlen(sep));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = size_of_malloc(size, strs, sep);
	if (size == 0)
		str = (char *)malloc(sizeof(char));
	else
		str = (char *)malloc(sizeof (char) * len + 1);
	if (!str)
		return (0);
	str[0] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	*str[] = {"j'ai", "un", "lapin"};
	char	sep[] = "-";
	free(ft_strjoin(0, str, sep));
}*/
