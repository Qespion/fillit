/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrtl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 16:49:31 by oespion           #+#    #+#             */
/*   Updated: 2018/04/13 17:51:00 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_wrtln(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we == 1)
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

void	ft_wrtle(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we == 1)
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

void	ft_wrtls(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we == 1)
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

void	ft_wrtlw(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we == 1)
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

void	ft_wrtL(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (shapes[p_nbr].direction == 0)
		ft_wrtln(x, y, map, shapes, p_nbr, we);
	if (shapes[p_nbr].direction == 1)
		ft_wrtle(x, y, map, shapes, p_nbr, we);
	if (shapes[p_nbr].direction == 2)
		ft_wrtls(x, y, map, shapes, p_nbr, we);
	if (shapes[p_nbr].direction == 3)
		ft_wrtlw(x, y, map, shapes, p_nbr, we);
}