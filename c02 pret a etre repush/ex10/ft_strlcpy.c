/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:50:24 by yachen            #+#    #+#             */
/*   Updated: 2023/02/19 17:22:14 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include  <bsd/string.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (str_len(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (str_len(src));
}
/*int	main(void)
{
	char	src[15] = "yabingchen";
	char	dest[15];

	printf("%d\n", ft_strlcpy(dest, src, 0));
	printf("%s\n", dest);
	printf("%ld\n", strlcpy(dest, src, 0));
	printf("%s\n", dest);
	return (0);
}*/
