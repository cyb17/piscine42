/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:23:15 by yachen            #+#    #+#             */
/*   Updated: 2023/02/15 18:03:06 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_final(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	f;
	int	i;

	i = 0;
	f = ft_final(dest);
	while (src[i] != '\0')
	{
		dest[f + i] = src[i];
		i++;
	}
	dest[f + i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	str1[16] = "CHEN ";
	char	str2[] = "Yabing";
	
	ft_strcat(str2, str1);
	printf("%s", str2);

	return (0);
}*/
