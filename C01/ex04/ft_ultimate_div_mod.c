/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuethan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:10:30 by msuethan          #+#    #+#             */
/*   Updated: 2022/10/22 18:44:29 by msuethan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = *a;
	y = *b;
	div = x / y;
	mod = x % y;
	*a = div;
	*b = mod;
}
/*
int	main()
{
	int x = 20;
	int y = 5;
	int c = 0;
	int d = 0;
	int *a;
	int *b;
	a = &c;
	b = &d;

	*a = x / y;
	*b = x % y;
	printf("x= %d y =%d\n",x,y);
	printf("X = %d Y = %d *A = %d *B = %d\n", x,y,*a,*b);
	ft_ultimate_div_mod(&x,&y);
	printf("*a =%d *b=%d",x,y);
}
*/
