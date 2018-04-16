/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrto.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 16:47:36 by oespion           #+#    #+#             */
/*   Updated: 2018/04/16 15:35:51 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

void	ft_wrtO(int x, int y, char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[y][x] = shapes[p_nbr].letter;
		map[y][x + 1] = shapes[p_nbr].letter;
		map[y + 1][x] = shapes[p_nbr].letter;
		map[y + 1][x + 1] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[y][x] = '.';
		map[y][x + 1] = '.';
		map[y + 1][x] = '.';
		map[y + 1][x + 1] = '.';
		shapes[p_nbr].set = 0;
	}
}