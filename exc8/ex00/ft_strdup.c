/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:28:18 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/09 20:14:48 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (*(str + a) != 0)
		a++;
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		i;

	cpy = 0;
	i = 0;
	cpy = malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (src[i] != 0)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}
int main (void)
{
	char p[]="hola marko esto funciona?";
	char *a;
	p[0] = 'A';
	a = ft_strdup(NULL);
	
	printf("%lu", sizeof(p));
	printf("copy %s \n", a);
	printf("original %s \n", strdup(NULL));
	//printf("printf de p : %s ", p);
}
