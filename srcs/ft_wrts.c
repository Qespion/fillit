/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:32:34 by oespion           #+#    #+#             */
/*   Updated: 2018/04/13 17:43:13 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_wrtSV(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we == 1)
	{
		map[x][y] = shapes[p_nbr].letter;
		map[x][y + 1] = shapes[p_nbr].letter;
		map[x + 1][y + 1] = shapes[p_nbr].letter;
		map[x + 1][y + 2] = shapes[p_nbr].letter;
	}
	else
	{
		map[x][y] = '.';
		map[x][y + 1] = '.';
		map[x + 1][y + 1] = '.';
		map[x + 1][y + 2] = '.';
	}
}

void	ft_wrtSH(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we == 1)
	{
		map[x][y] = shapes[p_nbr].letter;
		map[x + 1][y] = shapes[p_nbr].letter;
		map[x][y + 1] = shapes[p_nbr].letter;
		map[x - 1][y + 1] = shapes[p_nbr].letter;
	}
	else
	{
		map[x][y] = '.';
		map[x + 1][y] = '.';
		map[x][y + 1] = '.';
		map[x - 1][y + 1] = '.';
	}
}

void	ft_wrtS(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (shapes[p_nbr].direction == 0
		|| shapes[p_nbr].direction == 2)
		ft_wrtSV(x, y, map, shapes, p_nbr, we);
	else if (shapes[p_nbr].direction == 1
		|| shapes[p_nbr].direction == 3)
		ft_wrtSH(x, y, map, shapes, p_nbr, we);
}
