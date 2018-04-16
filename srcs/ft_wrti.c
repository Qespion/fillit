/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrti.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:23:00 by oespion           #+#    #+#             */
/*   Updated: 2018/04/15 20:06:54 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_wrtin(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we == 1)
	{
		map[y][x] = shapes[p_nbr].letter;
		map[y + 1][x] = shapes[p_nbr].letter;
		map[y + 2][x] = shapes[p_nbr].letter;
		map[y + 3][x] = shapes[p_nbr].letter;
	}
	else
	{
		map[y][x] = '.';
		map[y + 1][x] = '.';
		map[y + 2][x] = '.';
		map[y + 3][x] = '.';
	}
}

void	ft_wrtie(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we == 1)
	{
		map[y][x] = shapes[p_nbr].letter;
		map[y][x + 1] = shapes[p_nbr].letter;
		map[y][x + 2] = shapes[p_nbr].letter;
		map[y][x + 3] = shapes[p_nbr].letter;
	}
	else
	{
		map[y][x] = '.';
		map[y][x + 1] = '.';
		map[y][x + 2] = '.';
		map[y][x + 3] = '.';
	}
}

void	ft_wrtI(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (shapes[p_nbr].direction == 0)
		ft_wrtin(x, y, map, shapes, p_nbr, we);
	else if (shapes[p_nbr].direction == 1)
		ft_wrtie(x, y, map, shapes, p_nbr, we);
}