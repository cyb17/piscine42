/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:16:05 by yachen            #+#    #+#             */
/*   Updated: 2023/02/13 10:29:02 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else if ((str[i] >= 'a' && str[i] <= 'z') || str[0] == '\0')
			i++;
		else
			break ;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
/*int	main()
{
	char	chaine_vide[] = "\0";
	char	chaine_normale[] = "hkghjHKKHK";
	char	chaine_speciale[] = "808$#%$#%";

	printf("%d\n", ft_str_is_alpha(chaine_vide));
	printf("%d\n", ft_str_is_alpha(chaine_normale));
	printf("%d\n", ft_str_is_alpha(chaine_speciale));

	return (0);
}*/
