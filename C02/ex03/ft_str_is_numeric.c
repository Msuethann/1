/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuethan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:04:03 by msuethan          #+#    #+#             */
/*   Updated: 2022/10/24 19:01:41 by msuethan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	a;

	i = 0;
	if (str[i] == 0)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			a = 1;
		}
		else
		{
			a = 0;
			break ;
		}
	i++;
	}
	return (a);
}
/*
#include<stdio.h>
#include<string.h>
int	main()
{
	char str[100] = "123>567";
	printf("%d",ft_str_is_numeric(str));
}
*/
