/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:27:58 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/04 17:09:03 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	b;
	unsigned int	c;

	b = 0;
	c = 0;
	while (*(dest + b) != 0)
	{
		b++;
	}
	while ((*(src + c) != 0) && (c < nb))
	{
		*(dest + b) = *(src + c);
		b++;
		c++;
	}
	*(dest + b) = 0;
	return (dest);
}
int main()
{
	unsigned int nb;
 	char src[10000]="bueno";
	char dest[1000]="msdkhkshdlksjdd";

	nb = 3;
	printf("original: %s \n", strncat(dest, src, nb));
	printf("copy: %s \n", ft_strncat(dest, src, nb));
	

  return (0);
}
