/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 23:52:50 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/04 17:10:13 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	b;
	int	d;

	b = 0;
	if (*(to_find) == 0)
		return (str);
	while (*(str + b) != 0)
	{
		d = 0;
		while ((*(str + b + d) != 0) && (*(to_find + d) == *(str + d + b)))
		{
			if (*(to_find + d + 1) == 0)
				return (str + b);
			else
				d++;
		}
		b++;
	}
	return (NULL);
}
int main(void)
{
	char *z;
	char *x;
	char str[]="hola beunos dias que tal estas hoy como esta el rush?";
	char to_find[]="rush";
	ft_strstr(str, to_find);
	
	z = strstr(str, to_find);
	x = ft_strstr(str, to_find);
	printf("original:   %s \n", z);
	printf("copiaaaa:   %s \n", x);

}
