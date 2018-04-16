/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrtz.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 16:18:25 by oespion           #+#    #+#             */
/*   Updated: 2018/04/16 15:29:18 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_wrtzn(int x, int y, char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[y][x] = shapes[p_nbr].letter;
		map[y + 1][x] = shapes[p_nbr].letter;
		map[y + 1][x - 1] = shapes[p_nbr].letter;
		map[y + 2][x - 1] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[y][x] = '.';
		map[y + 1][x] = '.';
		map[y + 1][x - 1] = '.';
		map[y + 2][x - 1] = '.';
		shapes[p_nbr].set = 0;
	}
}

void	ft_wrtzh(int x, int y, char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[y][x] = shapes[p_nbr].letter;
		map[y][x + 1] = shapes[p_nbr].letter;
		map[y + 1][x + 1] = shapes[p_nbr].letter;
		map[y + 1][x + 2] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[y][x] = '.';
		map[y][x + 1] = '.';
		map[y + 1][x + 1] = '.';
		map[y + 1][x + 2] = '.';
		shapes[p_nbr].set = 0;
	}
}

void	ft_wrtZ(int x, int y, char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].direction == 0)
		ft_wrtzn(x, y, map, shapes, p_nbr);
	else if (shapes[p_nbr].direction == 1)
		ft_wrtzh(x, y, map, shapes, p_nbr);
}
