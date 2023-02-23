/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:18:27 by yachen            #+#    #+#             */
/*   Updated: 2023/02/23 19:45:38 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *str;

	str = (char*)malloc(sizeof(*str) * (ft_strlen(src) + 1));
	ft_strcpy(str, src);
	//free(str);
	return (str);
}

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "abcdefg";
	str2 = ft_strdup(str1);
	printf("%s", str2);
	return (0);
}
