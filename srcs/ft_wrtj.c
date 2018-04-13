/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrtj.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 16:39:17 by oespion           #+#    #+#             */
/*   Updated: 2018/04/13 16:47:03 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_wrtJN(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we = 1)
	{
		map[x][y] = shapes[p_nbr].letter;
		map[x][y + 1] = shapes[p_nbr].letter;
		map[x][y + 2] = shapes[p_nbr].letter;
		map[x - 1][y + 2] = shapes[p_nbr].letter;
	}
	else
	{
		map[x][y] = '.';
		map[x][y + 1] = '.';
		map[x][y + 2] = '.';
		map[x - 1][y + 2] = '.';
	}
}

void	ft_wrtJS(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we = 1)
	{
		map[x][y] = shapes[p_nbr].letter;
		map[x][y + 1] = shapes[p_nbr].letter;
		map[x + 1][y + 1] = shapes[p_nbr].letter;
		map[x + 2][y + 1] = shapes[p_nbr].letter;
	}
	else
	{
		map[x][y] = '.';
		map[x][y + 1] = '.';
		map[x + 1][y + 1] = '.';
		map[x + 2][y + 1] = '.';
	}
}

void	ft_wrtJE(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we = 1)
	{
		map[x][y] = shapes[p_nbr].letter;
		map[x][y + 1] = shapes[p_nbr].letter;
		map[x][y + 2] = shapes[p_nbr].letter;
		map[x - 1][y + 2] = shapes[p_nbr].letter;
	}
	else
	{
		map[x][y] = '.';
		map[x][y + 1] = '.';
		map[x][y + 2] = '.';
		map[x - 1][y + 2] = '.';
	}
}

void	ft_wrtJW(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we = 1)
	{
		map[x][y] = shapes[p_nbr].letter;
		map[x + 1][y] = shapes[p_nbr].letter;
		map[x + 2][y] = shapes[p_nbr].letter;
		map[x + 2][y + 1] = shapes[p_nbr].letter;
	}
	else
	{
		map[x][y] = '.';
		map[x + 1][y] = '.';
		map[x + 2][y] = '.';
		map[x + 2][y + 1] = '.';
	}
}

int	ft_wrtJ(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (shapes[p_nbr].direction == 0)
		ft_putJN(x, y, map, we);
	if (shapes[p_nbr].direction == 1)
		ft_putJE(x, y, map, we);
	if (shapes[p_nbr].direction == 2)
		ft_putJS(x, y, map, we);
	if (shapes[p_nbr].direction == 3)
		ft_putJW(x, y, map, we);
}
