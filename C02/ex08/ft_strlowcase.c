/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:44:04 by yachen            #+#    #+#             */
/*   Updated: 2023/02/13 11:55:18 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += ' ';
			i++;
		}
		else
			i++;
	}
	return (str);
}
/*int	main(void)
{
	char	str[] = "JE SUIS yABING chen";
	
	printf("chaine originale : %s\n", str);
	printf("chaine modifie : %s\n", ft_strlowcase(str));

	return (0);
}*/
