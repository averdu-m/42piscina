/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:10:14 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/05 14:35:42 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<unistd.h>
#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	b;

	b = 0;
	while ((*(s1 + b) != 0) && *(s2 + b) != 0 && b < n)
	{
		if (*(s1 + b) == *(s2 + b))
			b++;
		else
			return (*(s1 + b) - *(s2 + b));
	}
	if (b != n)
		return (*(s1 + b) - *(s2 + b));
	return (0);
}
/*int main()
{
  char s1[]="hola buenos dias bro que te cuentas";
  char s2[]="hola beno dias bro";
  unsigned int n;

  n = 6;
  printf("original: %d \n", strncmp(s1, s2, n));
  printf("copy: %d \n", ft_strncmp(s1, s2, n));
}*/
