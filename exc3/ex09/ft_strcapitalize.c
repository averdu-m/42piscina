/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sytcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:38:21 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/02 14:25:05 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	alphan(char d)
{
	return ((d < '0') || (d > '9' && d < 'A') || (d > 'Z' && d < 'a'));
}

int	ids0(int b)
{
	return (b != 0);
}

int	min(char a)
{
	return (a <= 'z' && a >= 'a');
}

int	mayus(char a)
{
	return (a <= 'Z' && a >= 'A');
}

char	*ft_strcapitalize(char *str)

{
	int		b;
	char	a;
	char	d;

	b = 0;
	while (*(str + b) != 0)
	{
		a = *(str + b);
		d = *(str + b - 1);
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		else if (((alphan(d) || (d > 'z')) && (a > 'a' || a > 'z')) && ids0(b))
		{
			if (!(alphan(a) || ((a > 'z') && (a > 'a' || a > 'z'))) && min(a))
				*(str + b) = a - 32;
		}
		else if (mayus(a) && !(alphan(d) || ((d > 'z') && min(a))))
			*(str + b) = a + 32;
		b++;
	}
	return (str);
}

/*int main(void)
{
	char str[]="hoLa,++x guApa 43o 43O  como eZtAs Hoy ., zorrA  ";
	int i;
	i = 0;
	ft_strcapitalize(str);
	while(*(str + i) != 0)
	{
		write(1, (str + i), 1);
		i++;
	}
}*/
