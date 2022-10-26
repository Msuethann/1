/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuethan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:13:27 by msuethan          #+#    #+#             */
/*   Updated: 2022/10/25 15:52:45 by msuethan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	g;

	i = 0;
	if (str[i] == 0)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			g = 1;
		}
		else
		{
			g = 0;
			return (g);
		}
		i++;
	}
	return (g);
}
/*
#include<stdio.h>
#include<strings.h>
int	main()
{
	char str[100] = "wertyuiop;rjdfhyui";
	printf("%d",ft_str_is_printable(str));
}
*/
