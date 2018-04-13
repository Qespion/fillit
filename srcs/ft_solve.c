/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 14:21:54 by oespion           #+#    #+#             */
/*   Updated: 2018/04/13 15:22:09 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft.h"

int		ft_try_piece

char	**ft_solve(char **map, t_shapes *shapes, int p_nbr)
{
	int	x;
	int	y;
	int	valid;

	valid = 0;
	x = 0;
	y = 0;
	while (shapes[p_nbr].letter)
	{
		if (shapes[p_nbr].set == 0)
		{
			while (0 == ft_trypiece(shapes, map, p_nbr, x, y)
				&& (x != 4 && y != 4))
			{
				x++;
				if (x == 4 && y != 4)
				{
					x = 0;
					y++;
				}
			}
		}
	}
}