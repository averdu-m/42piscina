/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:13:09 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/09 13:58:49 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	b;

	b = 0;
	if (min >= max)
	{
		arr = NULL;
		return (arr);
	}
	size = max - min;
	arr = malloc(sizeof(int) * (size + 1));
	while (b < size)
	{
		arr[b] = min + b;
		b++;
	}
	return (arr);
}
/*int main ()
{
	int *a;
	int min;
	int max;
	int b;
	b = 0;
	min = -15;
	max = 0;
	a = ft_range(min, max);
	while (b < 15)
	{
		printf("copy: %d \n",a[b]);
		b++;
	}
}*/
