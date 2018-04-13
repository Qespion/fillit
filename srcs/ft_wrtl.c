/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrtl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 16:49:31 by oespion           #+#    #+#             */
/*   Updated: 2018/04/13 17:03:20 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_wrtlN(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we = 1)
	{
		map[x][y] = shapes[p_nbr].letter;
		map[x][y + 1] = shapes[p_nbr].letter;
		map[x][y + 2] = shapes[p_nbr].letter;
		map[x + 1][y + 2] = shapes[p_nbr].letter;
	}
	else
	{
		map[x][y] = '.';
		map[x][y + 1] = '.';
		map[x][y + 2] = '.';
		map[x + 1][y + 2] = '.';
	}
}

void	ft_wrtlE(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we = 1)
	{
		map[x][y] = shapes[p_nbr].letter;
		map[x][y + 1] = shapes[p_nbr].letter;
		map[x + 1][y] = shapes[p_nbr].letter;
		map[x + 2][y] = shapes[p_nbr].letter;
	}
	else
	{
		map[x][y] = '.';
		map[x][y + 1] = '.';
		map[x + 1][y] = '.';
		map[x + 2][y] = '.';
	}
}

void	ft_wrtlS(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we = 1)
	{
		map[x][y] = shapes[p_nbr].letter;
		map[x + 1][y] = shapes[p_nbr].letter;
		map[x + 1][y + 1] = shapes[p_nbr].letter;
		map[x + 1][y + 2] = shapes[p_nbr].letter;
	}
	else
	{
		map[x][y] = '.';
		map[x + 1][y + 1] = '.';
		map[x + 1][y + 1] = '.';
		map[x + 1][y + 2] = '.';
	}
}

void	ft_wrtlW(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we = 1)
	{
		map[x][y] = shapes[p_nbr].letter;
		map[x][y + 1] = shapes[p_nbr].letter;
		map[x - 1][y + 1] = shapes[p_nbr].letter;
		map[x - 2][y + 1] = shapes[p_nbr].letter;
	}
	else
	{
		map[x][y] = '.';
		map[x][y + 1] = '.';
		map[x - 1][y + 1] = '.';
		map[x - 2][y + 1] = '.';
	}
}

int	ft_wrtL(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (shapes[p_nbr].direction == 0)
		ft_putLN(x, y, map, we);
	if (shapes[p_nbr].direction == 1)
		ft_putLE(x, y, map, we);
	if (shapes[p_nbr].direction == 2)
		ft_putLS(x, y, map, we);
	if (shapes[p_nbr].direction == 3)
		ft_putLW(x, y, map, we);
}