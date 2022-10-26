/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuethan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:14:14 by msuethan          #+#    #+#             */
/*   Updated: 2022/10/20 18:37:07 by msuethan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main()
{
	int x =5;
	int y = 9;
	printf("The value of x1 is %d\n",x);
	printf("The value of y1 is %d\n",y);

	ft_swap (&x, &y);
	printf("The value of x2 is %d\n",x);
	printf("The value of y2 is %d\n",y);
}
*/
