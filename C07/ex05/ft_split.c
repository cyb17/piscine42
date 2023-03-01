/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:34:24 by yachen            #+#    #+#             */
/*   Updated: 2023/03/01 17:32:42 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_strcmp(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] == src[i] && src[i])
		i++;
	return (dest[i] - src[i]);

}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
		i++;
	return (i)
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	charset_len;
	char	*tmp;

	i = 0;
	charset_len = ft_strlen(charset);
	while (str[i])
	{
		j = 0;
		if(str[i] == charset[j])
		{
			if (ft_strcmp(&str[i], charset) == 0);
				tmp = str[charset_len + 1];
		}
		i++;
	}
}

