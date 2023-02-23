/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:22:15 by yachen            #+#    #+#             */
/*   Updated: 2023/02/19 10:19:20 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ldest;
	int				lsrc;
	int				i;

	i = 0;
	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	if (size == ldest)
		return (ldest + lsrc);
	if (size > ldest)
	{
		while (src[i] && ldest + i < size - 1)
		{
			dest[ldest + i] = src[i];
			i++;
		}
		dest[ldest + i] = '\0';
		return (ldest + lsrc);
	}
	else
		return (size + lsrc);
}
/*
int	main(void)
{
	char	s1[5] = "chene";
	char	s2[] = "yabing";

	printf("%d\n", ft_strlcat(s1, s2, 6));
	printf("%s\n", s1);
	printf("%d\n", ft_strlcat(s1, s2, 3));
	printf("%s\n", s1);
	printf("%d\n", ft_strlcat(s1, s2, 7));
	printf("%s\n", s1);
	return (0);
}*/
/*	printf("-------------------------------------\n");
	printf("%zu\n", strlcat(s1, s2, 6));
	printf("%s\n", s1);
	printf("%zu\n", strlcat(s1, s2, 3));
	printf("%s\n", s1);
	printf("%zu\n", strlcat(s1, s2, 7));
	printf("%s\n", s1);
	return (0);
}*/
