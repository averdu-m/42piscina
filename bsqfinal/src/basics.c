/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:59:00 by dangonza          #+#    #+#             */
/*   Updated: 2021/12/16 13:50:10 by dangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"

int	ft_atoi(char *str)
{
	int	b;
	int	sign;
	int	num;

	num = 0;
	sign = 1;
	b = 0;
	while (str[b] == ' ' || str[b] == '\t' || str[b] == '\n' || str[b] == '\f'
		|| str[b] == '\r' || str[b] == '\v')
		b++;
	while (str[b] == '-' || str[b] == '+')
	{
		if (str[b] == '-')
			sign = sign * -1;
		b++;
	}
	while (str[b] <= '9' && str[b] >= '0')
	{
		num = (num * 10) + (str[b] - 48);
		b++;
	}
	return (sign * num);
}

int	is_prtb(char c)
{
	if (!(c <= ' ' && c <= '~'))
		return (1);
	return (0);
}

int	number_length(int number)
{
	if (number < 10)
		return (1);
	else
	{
		number /= 10;
		return (1 + number_length(number));
	}
}

int	**create_empty_map(int rows, int columns)
{
	int	**map;
	int	*arr_row;
	int	i;
	int	j;

	map = malloc(sizeof(int *) * rows);
	i = 0;
	while (i < rows)
	{
		arr_row = malloc(sizeof(int) * columns);
		j = 0;
		while (j < columns)
		{
			arr_row[j] = 0;
			j++;
		}
		map[i] = arr_row;
		i++;
	}
	return (map);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (*(str + index) != '\0')
		index++;
	return (index);
}
