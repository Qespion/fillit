/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrti.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:23:00 by oespion           #+#    #+#             */
/*   Updated: 2018/04/13 15:53:51 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_wrtiN(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we = 1)
	{
		map[x][y] = shapes[p_nbr].letter;
		map[x + 1][y] = shapes[p_nbr].letter;
		map[x + 2][y] = shapes[p_nbr].letter;
		map[x + 3][y] = shapes[p_nbr].letter;
	}
	else
	{
		map[x][y] = '.';
		map[x + 1][y] = '.';
		map[x + 2][y] = '.';
		map[x + 3][y] = '.';
	}
}

void	ft_wrtiN(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we = 1)
	{
		map[x][y] = shapes[p_nbr].letter;
		map[x][y + 1] = shapes[p_nbr].letter;
		map[x][y + 2] = shapes[p_nbr].letter;
		map[x][y + 3] = shapes[p_nbr].letter;
	}
	else
	{
		map[x][y] = '.';
		map[x][y + 1] = '.';
		map[x][y + 2] = '.';
		map[x][y + 3] = '.';
	}
}

void	ft_wrtI(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (shapes[p_nbr].direction == 0
		|| shapes[p_nbr].direction == 2)
		ft_wrtIN(x, y, map, shapes, p_nbr, we);
	else if (shapes[p_nbr].direction == 1
		|| shapes[p_nbr].direction == 3)
		ft_wrtIN(x, y, map, shapes, p_nbr, we);
}