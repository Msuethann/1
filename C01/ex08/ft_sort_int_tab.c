/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuethan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:22:40 by msuethan          #+#    #+#             */
/*   Updated: 2022/10/20 19:26:12 by msuethan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i +1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			j++;
		}
	i++;
	}
}
/*
void	printarray(int *tab, int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
}

int	main()
{
	int	tab[6] = {6, 5, 4, 3, 2, 1};
	int	size = 6;
	ft_sort_int_tab(tab,size);
	for	(int i =0 ;i<6;i++)
	{
		printf("\n%d\n",tab[i]);
	}
	printarray(tab, size);
}
*/
