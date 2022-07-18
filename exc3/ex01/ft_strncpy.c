/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:04:40 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/02 16:17:07 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	b;

	b = 0;
	while ((*(src + b) != 0) && b < n)
	{
		*(dest + b) = *(src + b);
		b++;
	}
	while (b < n)
	{
		*(dest + b) = 0;
		b++;
	}
	return (dest);
}

/*int main()
{
  char dest[13]="marco feo";
  char src[]="marco guapo";
  unsigned int n;
  n = 5;


  printf("original: %s \n", strncpy(dest, src, n));
  printf("copy: %s \n", ft_strncpy(dest, src, n));

}*/
