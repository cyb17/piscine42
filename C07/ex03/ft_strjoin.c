/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:11:25 by yachen            #+#    #+#             */
/*   Updated: 2023/02/28 17:42:28 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int	i;

	i = 0;
	str = (char  *)malloc(sizeof (*str)) * (size + (size - 1) * ft_strlen(sep));
	if (!str)
		return (0);
	if (size == 0)
	{
		str = malloc(sizeof(char));
		str = 0;
		return (str);
	}
	
}

int	main(void)
{
	char	*str[6] = {"abc", "def", "ghi", "jk"};
	char	sep[] = ",";
	ft_strjoin()
}
