/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuethan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:58:17 by msuethan          #+#    #+#             */
/*   Updated: 2022/10/22 22:07:05 by msuethan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	f;

	i = 0;
	if (str[i] == 0)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			f = 1;
		}
		else
		{
			f = 0;
			return (f);
		}
		i++;
	}
	return (f);
}
/*
#include<stdio.h>
#include<strings.h>
int	main()
{
	char str[100] = "ASD GHJKL";
	printf("%d",ft_str_is_uppercase(str));
}
*/
