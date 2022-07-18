/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:38:54 by averdu-m          #+#    #+#             */
/*   Updated: 2021/11/27 22:22:45 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	writes(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == 55))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a <= 57)
	{
		b = (a + 1);
		while (b <= 57)
		{
			c = (b + 1);
			while (c <= 57)
			{
				if (!(a == b || a == c || b == c))
				{
					writes(a, b, c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
