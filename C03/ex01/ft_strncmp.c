/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:36:41 by yachen            #+#    #+#             */
/*   Updated: 2023/02/19 19:23:09 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char	str1[] = "abcd";
	char	str2[] = "abcde";
	char	str3[] = "a";

	printf("%d\n", ft_strncmp(str1, str2, 2));
	printf("%d\n", ft_strncmp(str1, str3, 0));
	printf("%d\n", ft_strncmp(str3, str2, 0));
	printf("\n");
	printf("%d\n", strncmp(str1, str2, 2));
	printf("%d\n", strncmp(str1, str3, 0));
	printf("%d\n", strncmp(str3, str2, 0));
	return (0);
}*/
