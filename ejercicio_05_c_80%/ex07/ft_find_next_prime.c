/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:43:34 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/09 11:52:07 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / 2 && i * i > 0)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (nb < 2)
		return (2);
	while (ft_is_prime(i) == 0)
	{
		i++;
	}
	return (i);
}
/*int main()
{
	int nb;
	int x;

	nb=75;
	x = ft_find_next_prime(nb);
	printf("prueba: %d", x);
}*/
