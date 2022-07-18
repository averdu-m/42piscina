/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cartography.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:12:44 by dangonza          #+#    #+#             */
/*   Updated: 2021/12/16 13:51:07 by dangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "cartography.h"
#include "basics.h"

t_map	*parse_map_metadata(char *file)
{	
	int		fd;
	char	buffer[100];
	char	c;
	int		index;
	t_map	*map;

	map = malloc(sizeof(t_map));
	fd = open(file, O_RDONLY);
	if (map == NULL || fd == -1)
		return (NULL);
	map->file = file;
	index = 0;
	while (read(fd, &buffer[index], 1) > 0 && buffer[index] != '\n')
		index++;
	if (check_validity_parsed_map(map, buffer, index) == -1)
		return (NULL);
	index = 0;
	c = '\0';
	while (read(fd, &c, 1) > 0 && c != '\n')
		index++;
	map->size_h = index;
	close(fd);
	return (map);
}

int	check_validity_parsed_map(t_map *map, char buffer[100], int index)
{	
	int	n_length;

	map->size_v = ft_atoi(buffer);
	n_length = number_length(map->size_v);
	if (index < 4 || (index - n_length < 3))
		return (-1);
	map->full = buffer[n_length + 2];
	map->obst = buffer[n_length + 1];
	map->empty = buffer[n_length];
	if (map->size_v <= 0)
		return (-1);
	if (map->size_v <= 0 || (map->full == map->obst
			|| map->full == map->empty || map->obst == map->empty))
		return (-1);
	if (!is_prtb(map->full) || !is_prtb(map->obst) || !is_prtb(map->empty))
		return (-1);
	return (0);
}

int	parse_sqrs_map(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	map->sqrs_map = malloc(sizeof(int *) * map->size_v);
	if (map->sqrs_map == NULL)
		return (0);
	while (i < map->size_v)
	{
		map->sqrs_map[i] = malloc(sizeof(int) * map->size_h);
		if (map->sqrs_map[i] == NULL)
			return (0);
		j = 0;
		while (j < map->size_h)
		{
			if (map->char_map[i][j] == map->empty)
				map->sqrs_map[i][j] = 1;
			else
				map->sqrs_map[i][j] = 0;
			j++;
		}
		i++;
	}
	return (1);
}

int	parse_char_map(t_map *map)
{
	int		fd;
	char	c;
	int		line_count;
	int		num_obstacles;

	fd = open(map->file, O_RDONLY);
	while (read(fd, &c, 1) > 0 && c != '\n')
		c = 0;
	line_count = 0;
	map->char_map = malloc(sizeof(char *) * map->size_v);
	num_obstacles = 0;
	while (line_count < map->size_v)
	{
		if (parse_single_line_map(map, fd, line_count, &num_obstacles) == -1)
			return (-1);
		line_count++;
	}
	if (read(fd, &c, 1) > 0 || line_count != map->size_v)
		return (-1);
	return (0);
}

int	parse_single_line_map(t_map *map, int file, int line_count, int *obst)
{
	int		index;
	char	c;

	map->char_map[line_count] = malloc(sizeof(char) * map->size_h);
	index = 0;
	while (read(file, &c, 1) > 0 && c != '\n' && index < map->size_h)
	{
		map->char_map[line_count][index] = c;
		if (map->empty == c)
			*obst = *obst + 1;
		if (c != map->empty && c != map->obst)
			return (-1);
		index++;
	}
	if (index == 0 || index != map->size_h)
		return (-1);
	return (0);
}
