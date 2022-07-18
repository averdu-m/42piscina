/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:10:23 by averdu-m          #+#    #+#             */
/*   Updated: 2021/11/30 23:28:04 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	b;
	int	a;

	b = 0;
	while (*(str + b) != 0)
	{
		a = *(str + b);
		if (!((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')))
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
