/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:32:34 by oespion           #+#    #+#             */
/*   Updated: 2018/04/17 15:35:31 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_wrtSV(int x, int y, char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[y][x] = shapes[p_nbr].letter;
		map[y + 1][x] = shapes[p_nbr].letter;
		map[y + 1][x + 1] = shapes[p_nbr].letter;
		map[y + 2][x + 1] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[y][x] = '.';
		map[y + 1][x] = '.';
		map[y + 1][x + 1]= '.';
		map[y + 2][x + 1] = '.';
		shapes[p_nbr].set = 0;
	}
}

void	ft_wrtSH(int x, int y, char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[y][x] = shapes[p_nbr].letter;
		map[y][x + 1] = shapes[p_nbr].letter;
		map[y + 1][x - 1] = shapes[p_nbr].letter;
		map[y + 1][x] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[y][x] = '.';
		map[y][x + 1] = '.';
		map[y + 1][x - 1] = '.';
		map[y + 1][x] = '.';
		shapes[p_nbr].set = 0;
	}
}

void	ft_wrtS(int x, int y, char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].direction == 0)
		ft_wrtSV(x, y, map, shapes, p_nbr);
	else if (shapes[p_nbr].direction == 1)
		ft_wrtSH(x, y, map, shapes, p_nbr);
}
