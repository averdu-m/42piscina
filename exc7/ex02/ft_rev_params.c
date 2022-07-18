/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:16:33 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/07 17:22:46 by averdu-m         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int	i;

	(void) argc;
	(void) argv;
	i = argc - 1;
	while (i < argc && i > 0)
	{
		ft_putstr(argv[i]);
		i--;
	}
}
