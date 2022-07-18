/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:30:48 by dangonza          #+#    #+#             */
/*   Updated: 2021/12/15 14:31:09 by dangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
int		solve_map_file(char *file);
void	visualize_array(int **arr, int rows, int cols);
void	read_from_stdio(void);
#endif
