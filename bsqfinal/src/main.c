/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:29:43 by dangonza          #+#    #+#             */
/*   Updated: 2021/12/16 13:56:08 by dangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cartography.h"
#include "basics.h"
#include "main.h"
#include "stdin.h"

int	main(int argc, char **argv)
{
	int	return_value;
	int	index;

	return_value = 0;
	if (argc == 1)
	{	
		return_value = parse_map_metadata_stdin();
		if (return_value < 0)
			write(1, "map error\n", 10);
		return (0);
	}
	index = 1;
	while (index < argc)
	{
		return_value = solve_map_file(argv[index]);
		if (return_value < 0)
			write(1, "map error\n", 10);
		if (argc != 2)
			write(1, "\n", 1);
		index++;
	}
}

int	solve_map_file(char *file)
{
	t_map	*map;

	map = parse_map_metadata(file);
	if (map == NULL)
		return (-1);
	if (parse_char_map(map) != 0)
		return (-1);
	if (!parse_sqrs_map(map))
		return (-1);
	iterate_square_map(map);
	generate_blueprint(map);
	print_final_map(map);
	return (1);
}
