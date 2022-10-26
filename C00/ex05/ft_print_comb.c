/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuethan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:32:30 by msuethan          #+#    #+#             */
/*   Updated: 2022/10/12 20:33:16 by msuethan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	num(char x, char y, char z);

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	y = '0';
	z = '0';
	while (x <= '7')
	{
		y = x +1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				num(x, y, z);
				z ++;
			}
			y ++;
		}
		x ++;
	}
}

void	num(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (x != '7' || y != '8' || z != '9')
	{
		write(1, ", ", 2);
	}
}
