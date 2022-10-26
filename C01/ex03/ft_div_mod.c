/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuethan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:45:48 by msuethan          #+#    #+#             */
/*   Updated: 2022/10/20 18:39:50 by msuethan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int a =10;
	int b = 3;
	int div = 0;
	int mod = 0;

	printf("A = %d B = %d Div = %d mod = %d\n",a,b,div,mod);
	ft_div_mod(a,b,&div,&mod);

	printf("A = %d B = %d Div = %d mod = %d\n",a,b,div,mod);
	printf("tong dia Div = 3 mod = 1");
}
*/
