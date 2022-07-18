/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 22:43:47 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/02 16:07:07 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	b;
	int	a;

	b = 0;
	while (*(str + b) != 0)
	{
		a = *(str + b);
		if (!(a >= '0' && a <= '9') || *str == 0)
			return (0);
		b++;
	}
	return (1);
}

/*int main(void)
{
	int c;

	char str[5]="";
	c = ft_str_is_alpha(str) + 48;
	write(1, &c, 1);
}*/	
