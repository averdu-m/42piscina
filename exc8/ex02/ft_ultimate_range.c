/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:14:31 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/08 19:19:03 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	b;

	b = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * (size + 1));
	if (!(*range))
		return (-1);
	while (b < size)
	{
		(*range)[b] = min + b;
		b++;
	}
	return (size);
}
/*int main ()
{
	int **range;
	int a;
	int min;
	int max;
	int b;
	range = malloc(sizeof(int *));
	b = 0;
	min = 6;
	max = 18;
	a = ft_ultimate_range(range, min, max);
	printf("copy: %d \n",a);
}*/
