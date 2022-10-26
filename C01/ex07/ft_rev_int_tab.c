/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuethan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:57:28 by msuethan          #+#    #+#             */
/*   Updated: 2022/10/20 18:52:29 by msuethan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size -1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[j - i];
		tab[j - i] = temp;
		i++;
	}
}
/*
int	main(void)
{
	//j is an index
	int	tab[6] = {1, 2, 3, 4, 5, 6};
	int	size = 6;
	ft_rev_int_tab(tab,size);
	for (int i = 0 ; i < 6; i++)
	{
		printf("s =%d\n",tab[i]);
	}
}
*/
