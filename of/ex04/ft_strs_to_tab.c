/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:09:44 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/13 21:06:13 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include<stdlib.h>

int	leng(char *z)
{
	int	a;

	a = 0;
	while (*z != 0)
	{	
		a++;
		z++;
	}
	return (a);
}

char	*ftcpy(char *c, int size)
{
	char	*cpy;
	int		b;

	b = 0;
	cpy = NULL;
	cpy = malloc(sizeof(char) * (size + 1));
	while (c[b] != 0)
	{
		cpy[b] = c[b];
		b++;
	}
	cpy[b] = 0;
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*pru;
	int			b;

	b = 0;
	pru = malloc(sizeof(t_stock_str) * (ac + 1));
	if (pru == NULL)
		return (NULL);
	while (b < ac)
	{
		pru[b].size = leng(av[b]);
		pru[b].str = av[b];
		pru[b].copy = ftcpy(av[b], pru[b].size);
		b++;
	}
	pru[b].size = 0;
	pru[b].str = 0;
	pru[b].copy = 0;
	return (pru);
}
