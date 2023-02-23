/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:11:37 by yachen            #+#    #+#             */
/*   Updated: 2023/02/16 19:28:35 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32) || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	chaine_vide[] = "\0";
	char	chaine_non_affichable[] = "gh\nGH$%45";

	printf("chaine_vide : %d\n", ft_str_is_printable(chaine_vide));
	printf("chaine_affichable : %d\n", ft_str_is_printable(chaine_non_affichable));

	return (0);
}*/
