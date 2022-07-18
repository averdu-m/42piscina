/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:56:24 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/01 16:01:34 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_printable(char *str)
{
	int	b;
	int	a;

	b = 0;
	while (*(str + b) != 0)
	{
		a = *(str + b);
		if (!(a >= ' ' && a <= '~') || *str == 0)
			return (0);
		b++;
	}
	return (1);
}

/*int main(void)
{
	int c;

	char str[5]="HÆLA";
	c = ft_str_is_printable(str) + 48;
	write(1, &c, 1);
}*/
