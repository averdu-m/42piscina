/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:19:27 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/04 18:01:12 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<unistd.h>
#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	b;

	b = 0;
	while ((*(s1 + b) != 0))
	{
		if (*(s1 + b) == *(s2 + b))
			b++;
		else
			return (*(s1 + b) - *(s2 + b));
	}
	return (*(s1 + b) - *(s2 + b));
}

/*int main()
{
	char s1[]="hola aaaaaaaaaao";
	char s2[]="hola aaaaaaaaaaaa";

  printf("original: %d \n", strcmp(s1, s2));
  printf("copy: %d \n", ft_strcmp(s1, s2));
}*/
