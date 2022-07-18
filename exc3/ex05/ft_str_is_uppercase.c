/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:41:23 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/01 16:02:18 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	b;
	int	a;

	b = 0;
	while (*(str + b) != 0)
	{
		a = *(str + b);
		if (!(a >= 'A' && a <= 'Z') || *str == 0)
			return (0);
		b++;
	}
	return (1);
}

/*int main(void)
{
	int c;

	char str[5]="HoLA";
	c = ft_str_is_uppercase(str) + 48;
	write(1, &c, 1);
}*/
