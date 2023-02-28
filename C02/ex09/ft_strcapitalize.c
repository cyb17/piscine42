/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:56:19 by yachen            #+#    #+#             */
/*   Updated: 2023/02/19 17:45:01 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	uppercase(char *c)
{
	*c -= 32;
}

void	lowcase(char *c)
{
	*c += 32;
}

int	ft_is_not_alphanum(char c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c < '0' || c > '9'))
		return (1);
	return (0);
}

int	ft_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') && (c >= 'A' || c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		uppercase(&str[0]);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			lowcase(&str[i]);
		if (ft_is_alpha(str[i]) && ft_is_not_alphanum(str[i - 1]))
			uppercase(&str[i]);
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "SALUT, COMMENT TU VAS ? 42MOTS QUARANTE-DEUX; CINQUANTE+ET+UN";
	printf("chaine original : %s\n", str);
	printf("chaine modifie : %s", ft_strcapitalize(str));
	
	return (0);
}*/
