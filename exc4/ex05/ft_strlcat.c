/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:48:57 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/04 17:12:08 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

unsigned int	leng(char *z)
{
	unsigned int	b;

	b = 0;
	while (*(z + b) != 0)
		b++;
	return (b);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	lengp;
	unsigned int	lengd;
	unsigned int	lengs;

	d = 0;
	lengp = leng(dest);
	lengd = leng(dest);
	lengs = leng(src);
	if (size <= 0)
		return (lengs + size);
	while (lengp < size - 1)
	{
		*(dest + d) = *(src + d);
		d++;
		lengp++;
	}
	*(dest + lengp) = 0;
	if (size < lengd)
		 return (lengs + size);
	else
		return (lengd + lengs);
}
int main(void)
{
	unsigned int size;
 	char src[]="holyyyaa";
	char dest[]="malo q es marko";

	size = 2;
	printf("copy: %u \n", ft_strlcat(dest, src, size));
	printf("original: %lu \n", strlcat(dest, src, size));
	
}
