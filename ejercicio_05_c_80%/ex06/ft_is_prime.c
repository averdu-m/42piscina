/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:03:03 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/07 19:14:18 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= nb / 2 && i * i > 0)
	{	
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
	int nb;
	int x;

	nb=2147483647;
	x = ft_is_prime(nb);
	printf("prueba: %d", x);
}*/
