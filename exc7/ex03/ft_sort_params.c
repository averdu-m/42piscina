/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:06:14 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/07 22:12:34 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putstr(char *str)
{
	int	b;

	b = 0;
	while (*(str + b) != 0)
	{
		write(1, (str + b), 1);
		b++;
	}
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	b;

	b = 0;
	while (s1[b] == s2[b] && (s1[b] != 0 && s2[b] != 0))
		b++;
	return (*(s1 + b) - *(s2 + b));
}

int	main(int argc, char **argv)
{
	int		d;
	char	*aux;
	int		dif;

	dif = 1;
	while (dif != 0)
	{
		dif = 0;
		d = 0;
		while (++d < argc - 1)
		{
			if (ft_strcmp(argv[d], argv[d + 1]) > 0)
			{
				aux = argv[d];
				argv[d] = argv[d + 1];
				argv[d + 1] = aux;
				dif = 1;
			}			
		}
	}
	d = 0;
	while (++d < argc)
		ft_putstr(argv[d]);
	return (0);
}
