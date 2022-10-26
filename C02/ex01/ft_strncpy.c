/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuethan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:59:46 by msuethan          #+#    #+#             */
/*   Updated: 2022/10/25 21:38:22 by msuethan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include<stdio.h>
#include<string.h>
int	main()
{
	char src[5] = "Green";
	char dest[8];
	printf("h = %s\n",ft_strncpy(dest,src,5));
	//printf("h = %s\n",strncpy(dest,src,50));
}

