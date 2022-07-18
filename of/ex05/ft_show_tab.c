/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:52:42 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/14 18:42:17 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "ft_stock_str.h"

void	wfuntion(char z)
{
	write (1, &z, 1);
}

void	putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != 0)
	{
		write(1, (str + a), 1);
		a++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		wfuntion('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		wfuntion(nb + 48);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		putstr(par[i].str);
		wfuntion('\n');
		ft_putnbr(par[i].size);
		wfuntion('\n');
		putstr(par[i].copy);
		wfuntion('\n');
		i++;
	}
}
