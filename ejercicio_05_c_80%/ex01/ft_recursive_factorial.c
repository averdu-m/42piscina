/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:24:06 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/07 17:42:40 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	else
		return (nb * (ft_recursive_factorial(nb - 1)));
}
/*int main (void)
{
	int nb;
	int x;

	nb = 9;
	x = ft_recursive_factorial(nb);
	printf("prueba: %d",x);
}*/
