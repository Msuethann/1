/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuethan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:59:38 by msuethan          #+#    #+#             */
/*   Updated: 2022/10/23 17:36:14 by msuethan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
#include<string.h>
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char src[20] = "Hello World";
	char dest[20];
	printf(" h=%s",ft_strcpy(dest, src));
}
*/
