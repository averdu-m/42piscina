/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:06:35 by dangonza          #+#    #+#             */
/*   Updated: 2021/12/16 10:32:56 by dangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STDIN_H
# define STDIN_H
char	*append(char *prev_str, char c);
char	*parse_first_line_stdin(void);
int		parse_map_metadata_stdin(void);
int		parse_map_info_stdin(t_map *map);
int		parse_char_map_stdin(t_map *map);
int		parse_single_line_map_stdin(t_map *map, int line_count, int *obst);
int		solve_map_stdin(t_map *map);
int		check_validity_parsed_map_stdin(t_map *map);
#endif
