/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:13:55 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/02 16:08:50 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strlowcase(char *str)

{
	int	b;
	int	a;

	b = 0;
	while (*(str + b) != 0)
	{
		a = *(str + b);
		if (a >= 'A' && a <= 'Z')
		{
			a = a + 32;
		}
		*(str + b) = a;
		b++;
	}
	return (str);
}

/*int main(void)
{
	char str[6]="ZOl1A";
	int i;

	i = 0;

	ft_strupcase(str);

	while(*(str + i) != 0)
	{
		write(1, (str + i), 1);
		i++;
	}

}*/
