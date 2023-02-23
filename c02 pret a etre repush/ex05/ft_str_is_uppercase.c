/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:02:33 by yachen            #+#    #+#             */
/*   Updated: 2023/02/16 16:40:30 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 65 && str[i] <= 90) || str[0] == '\0')
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
	char	str_maj[] = "FDSHHJYJ";
	char	str_empty[] = "\0";
	char	str_min_special[] = "jklre;%#%&%^&4367";

	printf("chaine maj : %d\n", ft_str_is_uppercase(str_maj));
	printf("chaine vide : %d\n", ft_str_is_uppercase(str_empty));
	printf("chaine min et special : %d\n", ft_str_is_uppercase(str_min_special));
	return(0);
}*/
