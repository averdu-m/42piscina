/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:57:13 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/03 22:38:53 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
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

/*int main()
{
  char src[10000]="bueno";
  char dest[1000]="malio";
  printf("original: %s \n", strcat(dest, src));
  printf("copy: %s \n", ft_strcat(dest, src));

  return (0);
}*/
