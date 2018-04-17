/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrti.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:23:00 by oespion           #+#    #+#             */
/*   Updated: 2018/04/17 13:49:53 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_wrtin(int x, int y, char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[y][x] = shapes[p_nbr].letter;
		map[y][x + 1] = shapes[p_nbr].letter;
		map[y][x + 2] = shapes[p_nbr].letter;
		map[y][x + 3] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[y][x] = '.';
		map[y][x + 1] = '.';
		map[y][x + 2] = '.';
		map[y][x + 3] = '.';
		shapes[p_nbr].set = 0;
	}
}

void	ft_wrtie(int x, int y, char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[y][x] = shapes[p_nbr].letter;
		map[y + 1][x] = shapes[p_nbr].letter;
		map[y + 2][x] = shapes[p_nbr].letter;
		map[y + 3][x] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[y][x] = '.';
		map[y + 1][x] = '.';
		map[y + 2][x] = '.';
		map[y + 3][x] = '.';
		shapes[p_nbr].set = 0;
	}
}

void	ft_wrtI(int x, int y, char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].direction == 0)
		ft_wrtin(x, y, map, shapes, p_nbr);
	else if (shapes[p_nbr].direction == 1)
		ft_wrtie(x, y, map, shapes, p_nbr);
}