/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:08:21 by averdu-m          #+#    #+#             */
/*   Updated: 2021/11/28 17:44:17 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	writes(int a, int b, int c, int d)
{
	if (a * 10 + b < c * 10 + d)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (!(a == 57 & b == 56 & c == 57 & d == 57))
			write(1, ", ", 2);
	}
}

void	to_much_lines(int a, int b, int c, int d)
{
	while (c <= 57)
	{
		d = 48;
		while (d <= 57)
		{
			writes(a, b, c, d);
			d++;
		}
		c++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	d = 0;
	a = 48;
	while (a <= 57)
	{
		b = 48;
		while (b <= 57 )
		{
			c = 48;
			to_much_lines(a, b, c, d);
			b++;
		}
		a++;
	}	
}
