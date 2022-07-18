/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:10:27 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/07 18:58:00 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	z;

	z = 1;
	if (power < 0)
		return (0);
	while (power != 0)
	{
		z = z * nb;
		power--;
	}
	return (z);
}
/*int main (void)
{
	int nb;
	int power;
	int x;
	nb = 5;
	power = 6;
	x = ft_iterative_power(nb, power);
	printf("prueba: %d",x);
}*/
