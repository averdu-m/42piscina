/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cartography.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdu-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:24:24 by averdu-m          #+#    #+#             */
/*   Updated: 2021/12/14 19:26:32 by averdu-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CARTOGRAPHY_H
# define CARTOGRAPHY_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_map
{
	char	*file;
	int		size_h;
	int		size_v;
	char	empty;
	char	full;
	char	obst;
	char	**char_map;
	int		**sqrs_map;
	int		**blueprint;
	int		max_number;
	int		corner_i;
	int		corner_j;
}	t_map;

t_map	*parse_map_metadata(char *file);
int		parse_char_map(t_map *map);
int		parse_sqrs_map(t_map *map);
int		iterate_square_map(t_map *map);
int		generate_blueprint(t_map *map);
int		modiff_position(t_map *map, int i, int j, int number);
void	print_final_map(t_map *map);
int		blueprint_place_flag(t_map *map);
int		parse_single_line_map(t_map *map, int file, int line_count, int *obst);
int		check_validity_parsed_map(t_map *map, char buffer[100], int index);
#endif
