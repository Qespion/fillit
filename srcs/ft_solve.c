/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 14:21:54 by oespion           #+#    #+#             */
/*   Updated: 2018/04/13 18:51:46 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft.h"

int		ft_try_piece(int x, int y, char **map, int p_nber, t_shapes *shapes)
{
	while (ft_trypiece(shapes, map, p_nbr, x, y) != 0)
	{
		if (x == 5)
		{
			x = -1;
			y++;
		}
		if (y == 5)
			return (0);
		if ()
		return (ft_trypiece(shapes, map, p_nbr, x + 1, y))
	}
}

char	**ft_solve(char **map, t_shapes *shapes, int p_nbr)
{
	int	x;
	int	y;

	while (shapes[p_nbr].letter)
	{
		x = 0;
		y = 0;
		ft_try_piece(int x, int y, char **map, int p_nber, t_shapes *shapes);
	}
}