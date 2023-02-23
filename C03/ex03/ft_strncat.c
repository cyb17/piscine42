/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:54:09 by yachen            #+#    #+#             */
/*   Updated: 2023/02/15 18:07:24 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	str_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	f;

	f = str_lenght(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[f + i] = src[i];
		i++;
	}
	dest[f + i] = '\0';
	return (dest);
}
/*int main(void)
{
	char	str1[20] = "chen ";
	char	str2[] = "yabing";

	printf("%s",ft_strncat(str1, str2, 5));
	return (0);
}*/
