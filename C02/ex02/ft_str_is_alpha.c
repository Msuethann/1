/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuethan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:46:46 by msuethan          #+#    #+#             */
/*   Updated: 2022/10/25 16:04:04 by msuethan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			a = 1;
		}
		else
		{
			a = 0;
			return (a);
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
	char str[100] = "wertyuieug[";
	printf("%d",ft_str_is_alpha(str));
}
*/
