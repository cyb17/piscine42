/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:31:29 by yachen            #+#    #+#             */
/*   Updated: 2023/02/13 10:35:55 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '9' && str[i] > '0') || str[0] == '\0')
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
	char	chaine_normale[] = "123456789";
	char	chaine_vide[] = "\0";
	char	chaine_speciale[] = "hgj$%^FGH";

	printf("%d\n", ft_str_is_numeric(chaine_normale));
	printf("%d\n", ft_str_is_numeric(chaine_vide));
	printf("%d\n", ft_str_is_numeric(chaine_speciale));

	return 0;
}*/
