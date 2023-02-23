/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:40:27 by yachen            #+#    #+#             */
/*   Updated: 2023/02/13 10:37:12 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) || str[0] == '\0')
			i++;
		else
			break ;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
/*int	main(void)
{
	char	chaine_min[] = "gdhjslhnjvnskn";
	char	chaine_vide[] = "\0";
	char	chaine_speciale[] = "$#%^464FDFD";

	printf("chaine minuscule : %d\n ", ft_str_is_lowercase(chaine_min));
	printf("chaine vide : %d\n", ft_str_is_lowercase(chaine_vide));
	printf("chaine sepecial et maj : %d", ft_str_is_lowercase(chaine_speciale));

	return (0);
}*/
