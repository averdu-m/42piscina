/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:58:30 by dangonza          #+#    #+#             */
/*   Updated: 2021/12/15 21:15:15 by dangonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASICS_H
# define BASICS_H
# include <stdlib.h>
int	ft_atoi(char *str);
int	**create_empty_map(int rows, int columns);
int	is_prtb(char c);
int	number_length(int number);
int	ft_strlen(char *str);
#endif
