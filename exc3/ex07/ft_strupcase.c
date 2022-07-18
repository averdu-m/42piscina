/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:44:07 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/01 17:15:40 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

char	*ft_strupcase(char *str)

{
	int	b;
	int	a;

	b = 0;
	while (*(str + b) != 0)
	{
		a = *(str + b);
		if (a >= 'a' && a <= 'z')
		{
			a = a - 32;
		}
		*(str + b) = a;
		b++;
	}
	return (str);
}

/*int main(void)
{
	char str[6]="zolla";
	int i;

	i = 0;

	ft_strupcase(str);
	
	while(*(str + i) != 0)
	{
		write(1, (str + i), 1);
		i++;
	}

}*/
