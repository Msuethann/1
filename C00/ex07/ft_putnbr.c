/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuethan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:00:29 by msuethan          #+#    #+#             */
/*   Updated: 2022/10/13 16:58:17 by msuethan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int nb)
{
	write(1, &nb, 1);
}

void	ft_putno(int nb)
{
	char	x;

	if (nb != 0)
	{
		x = '0' + (nb % 10);
		nb = nb / 10;
		ft_putno(nb);
		ft_putchar(x);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
		ft_putno(nb);
		return ;
	}
	if (nb > 0)
	{
		ft_putno(nb);
	}
}

/*int	main(void)
{
	ft_putnbr(-2147483649);
}*/
