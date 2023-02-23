/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:43:26 by yachen            #+#    #+#             */
/*   Updated: 2023/02/22 16:39:12 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
		{
			j++;
		}
		if (j == ft_strlen(to_find))
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "abancdebananefg";
	char	to_find1[] = "banane";
	char	to_find2[] = "c";
	char	to_find3[] = "\0";

	printf("%s\n", ft_strstr(str, to_find1));
	printf("%s\n", ft_strstr(str, to_find2));
	printf("%s\n", ft_strstr(str, to_find3));
	printf("\n---------------\n");
	printf("%s\n", strstr(str, to_find1));
	printf("%s\n", strstr(str, to_find2));
	printf("%s\n", strstr(str, to_find3));

	return (0);
}*/
