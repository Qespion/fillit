/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrtz.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 16:18:25 by oespion           #+#    #+#             */
/*   Updated: 2018/04/13 16:38:48 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_wrtzN(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we = 1)
	{
		map[x][y] = shapes[p_nbr].letter;
		map[x][y + 1] = shapes[p_nbr].letter;
		map[x - 1][y + 1] = shapes[p_nbr].letter;
		map[x - 1][y + 2] = shapes[p_nbr].letter;
	}
	else
	{
		map[x][y] = '.';
		map[x][y + 1] = '.';
		map[x - 1][y + 1] = '.';
		map[x - 1][y + 2] = '.';
	}
}

void	ft_wrtzH(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (we = 1)
	{
		map[x][y] = shapes[p_nbr].letter;
		map[x + 1][y] = shapes[p_nbr].letter;
		map[x + 1][y + 1] = shapes[p_nbr].letter;
		map[x + 2][y + 1] = shapes[p_nbr].letter;
	}
	else
	{
		map[x][y] = '.';
		map[x][y + 1] = '.';
		map[x][y + 2] = '.';
		map[x + 1][y + 1] = '.';
	}
}

int	ft_wrtZ(int x, int y, char **map, t_shapes *shapes, int p_nbr, int we)
{
	if (shapes[p_nbr].direction == 0
		|| shapes[p_nbr].direction == 2)
		ft_putzN(x, y, map);
	else if (shapes[p_nbr].direction == 1
		|| shapes[p_nbr].direction == 3)
		ft_putzH(x, y, map);
}