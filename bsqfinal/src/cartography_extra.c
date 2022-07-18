/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cartography_extra.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 10:24:24 by dangonza          #+#    #+#             */
/*   Updated: 2021/12/16 11:48:37 by dangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "cartography.h"
#include "basics.h"

int	iterate_square_map(t_map *map)
{
	int	anything_changed;
	int	find_number;
	int	i;
	int	j;

	anything_changed = 1;
	find_number = 0;
	while (anything_changed)
	{
		anything_changed = 0;
		find_number++;
		i = find_number;
		while (i < map->size_v)
		{
			j = find_number;
			while (j < map->size_h)
			{
				anything_changed += modiff_position(map, i, j, find_number);
				j++;
			}
			i++;
		}
	}
	map->max_number = find_number;
	return (1);
}

int	modiff_position(t_map *map, int i, int j, int number)
{
	if (map->sqrs_map[i][j] == number)
	{
		if (map->sqrs_map[i - 1][j] >= map->sqrs_map[i][j] &&
		map->sqrs_map[i - 1][j - 1] >= map->sqrs_map[i][j] &&
		map->sqrs_map[i][j - 1] >= map->sqrs_map[i][j])
		{
			map->sqrs_map[i][j]++;
			return (1);
		}
	}
	return (0);
}

int	generate_blueprint(t_map *map)
{
	int	i;
	int	j;
	int	flag_placed;

	map->blueprint = create_empty_map(map->size_v, map->size_h);
	flag_placed = blueprint_place_flag(map);
	if (!flag_placed)
		return (1);
	i = map->corner_i - (map->max_number - 1);
	while (i <= map->corner_i)
	{
		j = map->corner_j - (map->max_number - 1);
		while (j <= map->corner_j)
		{
			map->blueprint[i][j] = 1;
			j++;
		}
		i++;
	}
	return (1);
}

int	blueprint_place_flag(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->size_v)
	{
		j = 0;
		while (j < map->size_h)
		{
			if (map->sqrs_map[i][j] == map->max_number)
			{
				map->blueprint[i][j] = 1;
				map->corner_i = i;
				map->corner_j = j;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	print_final_map(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->size_v)
	{
		j = 0;
		while (j < map->size_h)
		{
			if (map->blueprint[i][j])
				write(1, &map->full, 1);
			else
				write(1, &map->char_map[i][j], 1);
			if (j != map->size_h - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
