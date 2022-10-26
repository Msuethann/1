/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuethan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:43:51 by msuethan          #+#    #+#             */
/*   Updated: 2022/10/26 14:45:57 by msuethan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_upper(char *str)
{
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = (str[0] - 'a') + 'A';
	}
}

void	ft_lowwer(char *str)
{
	if (str[0] > 'A' && str[0] < 'Z')
	{
		str[0] = (str[0] - 'A') + 'a';
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || (str[i - 1] >= 32 && str[i - 1] <= 47))
		{
			ft_upper(&str[i]);
		}
		else
		{
			ft_lowwer(&str[i]);
		}
		i++;
	}
	return (str);
}
/*
#include<stdio.h>
#include<strings.h>
int	main()
{
	char str[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n",ft_strcapitalize(str));
}
*/
