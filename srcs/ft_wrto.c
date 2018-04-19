/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrto.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 16:47:36 by oespion           #+#    #+#             */
/*   Updated: 2018/04/19 13:46:41 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

void	ft_wrto(char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[shapes[p_nbr].y][shapes[p_nbr].x] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y][shapes[p_nbr].x + 1] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x + 1] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[shapes[p_nbr].y][shapes[p_nbr].x] = '.';
		map[shapes[p_nbr].y][shapes[p_nbr].x + 1] = '.';
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x] = '.';
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x + 1] = '.';
		shapes[p_nbr].set = 0;
	}
}