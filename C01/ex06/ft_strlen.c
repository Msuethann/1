/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuethan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 08:16:03 by msuethan          #+#    #+#             */
/*   Updated: 2022/10/20 18:51:22 by msuethan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int	main()
{
	char *a ="qwertyuiopasdfghjklzxcvbnm";
	int i = ft_strlen("qwertyuiopasdfghjklzxcvbnm,");
	printf("i = %d\n", i);
	printf("%d\n",ft_strlen(a));
}
*/
