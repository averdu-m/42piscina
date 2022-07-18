/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:41:44 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/07 17:36:49 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 1 )
	{
		i = i * nb;
		nb--;
	}
	return (i);
}

/*int main (void)
{
	int x;
	int nb;
	nb = 0;
	x = ft_iterative_factorial(nb);
	printf("prueba: %d",x);
}*/
