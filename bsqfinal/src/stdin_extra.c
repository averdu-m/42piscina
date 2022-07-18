/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin_extra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 10:27:33 by dangonza          #+#    #+#             */
/*   Updated: 2021/12/16 13:51:48 by dangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "cartography.h"
#include "basics.h"
#include "stdin.h"

int	parse_first_map_line_stdin(t_map *map)
{
	char	*str;
	int		length;
	char	c;

	length = 0;
	str = malloc(sizeof(char));
	if (str == NULL)
		return (-1);
	*str = '\0';
	while (read(STDIN_FILENO, &c, 1) && c != '\n')
	{
		if (c != map->empty && c != map->obst)
			return (-1);
		str = append(str, c);
		length++;
	}
	map->size_h = length;
	if (length <= 0)
		return (-1);
	map->char_map[0] = str;
	return (0);
}

int	parse_char_map_stdin(t_map *map)
{
	int		line_count;
	int		num_spaces;

	line_count = 1;
	if (parse_first_map_line_stdin(map) < 0)
		return (-1);
	num_spaces = 0;
	while (line_count < map->size_v)
	{
		if (parse_single_line_map_stdin(map, line_count, &num_spaces) == -1)
			return (-2);
		line_count++;
	}
	if (line_count != map->size_v)
		return (-3);
	return (0);
}

int	parse_single_line_map_stdin(t_map *map, int line_count, int *spacs)
{
	int		index;
	char	c;

	map->char_map[line_count] = malloc(sizeof(char) * map->size_h);
	index = 0;
	while (read(STDIN_FILENO, &c, 1) > 0 && c != '\n' && index < map->size_h)
	{
		map->char_map[line_count][index] = c;
		if (map->empty == c)
			*spacs = *spacs + 1;
		if (c != map->empty && c != map->obst)
			return (-20);
		index++;
	}
	if (index == 0 || index != map->size_h)
		return (-1);
	return (0);
}

char	*append(char *prev_str, char c)
{
	int		index;
	char	*new_str;

	index = 0;
	while (prev_str[index] != '\0')
		index++;
	new_str = malloc(sizeof(char) * (index + 2));
	index = 0;
	while (prev_str[index] != '\0')
	{
		new_str[index] = prev_str[index];
		index++;
	}
	new_str[index] = c;
	new_str[index + 1] = '\0';
	free(prev_str);
	return (new_str);
}
