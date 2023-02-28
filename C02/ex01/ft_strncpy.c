/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:06:07 by yachen            #+#    #+#             */
/*   Updated: 2023/02/16 16:38:05 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*int	main()
{
	char	chaine1[] = "je suis Yabing";
	char	chaine2[] = "je suis CHEN Yabing";
	char	chaine_copie[30];

	printf("copie1 : %s\t", ft_strncpy(chaine_copie, chaine1, 8));
	printf("copie2 : %s\t", ft_strncpy(chaine_copie, chaine2, 25));

	return (0);
}*/
