/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:59:22 by dangonza          #+#    #+#             */
/*   Updated: 2021/12/16 11:51:39 by dangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "cartography.h"
#include "basics.h"
#include "stdin.h"

int	parse_map_metadata_stdin(void)
{
	t_map	*map;

	map = malloc(sizeof(t_map));
	if (map == NULL)
		return (-1);
	if (parse_map_info_stdin(map) < 0)
		return (-1);
	if (solve_map_stdin(map) < 0)
		return (-1);
	return (0);
}

int	parse_map_info_stdin(t_map *map)
{
	char	*first_line;
	int		n_length;

	first_line = parse_first_line_stdin();
	map->size_v = ft_atoi(first_line);
	n_length = number_length(map->size_v);
	if (n_length <= 0 || ft_strlen(first_line) < 4)
		return (-1);
	map->empty = *(first_line + n_length);
	map->obst = *(first_line + n_length + 1);
	map->full = *(first_line + n_length + 2);
	if (check_validity_parsed_map_stdin(map) < 0)
		return (-1);
	map->char_map = malloc(sizeof(char *) * map->size_v);
	if (parse_char_map_stdin(map) < 0)
		return (-1);
	return (0);
}

int	check_validity_parsed_map_stdin(t_map *map)
{
	if (map->size_v <= 0)
		return (-1);
	if (map->size_v <= 0 || (map->full == map->obst
			|| map->full == map->empty || map->obst == map->empty))
		return (-1);
	if (!is_prtb(map->full) || !is_prtb(map->obst) || !is_prtb(map->empty))
		return (-1);
	return (0);
}

int	solve_map_stdin(t_map *map)
{
	if (!parse_sqrs_map(map))
		return (-1);
	iterate_square_map(map);
	generate_blueprint(map);
	print_final_map(map);
	return (1);
}

char	*parse_first_line_stdin(void)
{
	char	*str;
	char	c;

	str = malloc(sizeof(char));
	*str = '\0';
	while (read(STDIN_FILENO, &c, 1) && c != '\n')
		str = append(str, c);
	return (str);
}
