/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuethan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:33:43 by msuethan          #+#    #+#             */
/*   Updated: 2022/10/22 21:58:07 by msuethan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	d;

	i = 0;
	if (str[i] == 0)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			d = 1;
		}
		else
		{
			d = 0;
			return (d);
		}
	i++;
	}
	return (d);
}
/*
#include<stdio.h>
#include<strings.h>
int	main()
{
	char str[100] = "";
	printf("%d",ft_str_is_lowercase(str));
}
*/
