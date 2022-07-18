/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 23:30:03 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/01 15:20:36 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	b;
	int	d;

	b = 0;
	b = *tab;
	*tab = *(tab + (size - 1));
	*(tab + (size - 1)) = b;
	while (b < (size - 1))
	{
		if (*(tab + b) > *(tab + (b + 1)))
		{
			d = *(tab + b);
			*(tab + b) = *(tab + (b + 1));
			*(tab + (b + 1)) = d;
			b = 0;
		}
		b++;
	}
}
int main (void)
{
	int tab[8] = { 4, 7, 8, 3, 5, 9 ,1 };
	int size = 8;
	ft_sort_int_tab(tab, size);
	for (int i=0; i<8; i++)
	{
	printf("%d",tab[i]);
	}
}
