/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrtl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 16:49:31 by oespion           #+#    #+#             */
/*   Updated: 2018/04/16 15:24:33 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_wrtln(int x, int y, char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[y][x] = shapes[p_nbr].letter;
		map[y + 1][x] = shapes[p_nbr].letter;
		map[y + 2][x] = shapes[p_nbr].letter;
		map[y + 2][x + 1] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[y][x] = '.';
		map[y + 1][x] = '.';
		map[y + 2][x] = '.';
		map[y + 2][x + 1] = '.';
		shapes[p_nbr].set = 0;
	}
}

void	ft_wrtle(int x, int y, char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[y][x] = shapes[p_nbr].letter;
		map[y][x + 1] = shapes[p_nbr].letter;
		map[y][x + 2] = shapes[p_nbr].letter;
		map[y + 1][x] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[y][x] = '.';
		map[y][x + 1] = '.';
		map[y][x + 2] = '.';
		map[y + 1][x] = '.';
		shapes[p_nbr].set = 0;
	}
}

void	ft_wrtls(int x, int y, char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[y][x] = shapes[p_nbr].letter;
		map[y][x + 1] = shapes[p_nbr].letter;
		map[y + 1][x + 1] = shapes[p_nbr].letter;
		map[y + 2][x + 1]= shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[y][x] = '.';
		map[y][x + 1] = '.';
		map[y + 1][x + 1] = '.';
		map[y + 2][x + 1] = '.';
		shapes[p_nbr].set = 0;
	}
}

void	ft_wrtlw(int x, int y, char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[y][x] = shapes[p_nbr].letter;
		map[y + 1][x] = shapes[p_nbr].letter;
		map[y + 1][x - 1] = shapes[p_nbr].letter;
		map[y + 1][x - 2] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[y][x] = '.';
		map[y + 1][x] = '.';
		map[y + 1][x - 1] = '.';
		map[y + 1][x - 2] = '.';
		shapes[p_nbr].set = 0;
	}
}

void	ft_wrtL(int x, int y,char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].direction == 0)
		ft_wrtln(x, y, map, shapes, p_nbr);
	if (shapes[p_nbr].direction == 1)
		ft_wrtle(x, y, map, shapes, p_nbr);
	if (shapes[p_nbr].direction == 2)
		ft_wrtls(x, y, map, shapes, p_nbr);
	if (shapes[p_nbr].direction == 3)
		ft_wrtlw(x, y, map, shapes, p_nbr);
}