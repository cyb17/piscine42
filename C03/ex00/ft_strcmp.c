/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:00:18 by yachen            #+#    #+#             */
/*   Updated: 2023/02/18 18:48:10 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (s1[i] == s2[i]))
			i++;
	return (s1[i] - s2[i]);
}
/*int	main(void)
{
	char	str1[] = "\0";
	char	str2[] = "\0";
	char	str3[] = "abcd";

	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", ft_strcmp(str1, str3));
	printf("%d\n", ft_strcmp(str3, str1));
	printf("\n");
	printf("%d\n", strcmp(str1, str2));
	printf("%d\n", strcmp(str1, str3));
	printf("%d\n", strcmp(str3, str1));
	return (0);
}*/
