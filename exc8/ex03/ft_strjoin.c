/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:23:39 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/09 17:52:11 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (*(str + a) != 0)
		a++;
	return (a);
}

char	*ft_strcat(char *dest, char *src)
{
	int	b;
	int	c;

	b = 0;
	c = 0;
	while (*(dest + b) != 0)
	{
		b++;
	}
	while (*(src + c) != 0)
	{
		*(dest + b) = *(src + c);
		b++;
		c++;
	}
	*(dest + b) = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		b;
	int		osize;
	char	*tog;

	b = 0;
	osize = 0;
	while (b < size)
	{
		osize = osize + ft_strlen(strs[b]) + ft_strlen(sep);
		b++;
	}
	if (size != 0)
		osize = osize - ft_strlen(sep);
	tog = malloc(sizeof(char) * (osize + 1));
	*tog = 0;
	b = 0;
	while (b < size)
	{
		ft_strcat(tog, strs[b]);
		if (b != size - 1)
			ft_strcat(tog, sep);
		b++;
	}
	tog[osize] = 0;
	return (tog);
}
/*int main ()
{
	int size;
	char *strs[]={
	"holabro",
	"que tall estas",
	};
	char *sep="SEP";
	size = 2; 
	int i;
	char *a;
	i = 0;
	a = ft_strjoin(size, strs, sep);
	while (a[i] != 0)
	{
		write(1, (a + i), 1);
		i++;
	}
}*/
