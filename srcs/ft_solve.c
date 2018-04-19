/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 14:21:54 by oespion           #+#    #+#             */
/*   Updated: 2018/04/19 13:52:49 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

void	ft_print(char **map)
{
	int	r;
	int	i;

	r = 0;
	i = 0;
	while (map[r])
	{
		while (map[r][i])
		{
			ft_putchar(map[r][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		r++;
	}
}

void	ft_mod_tab(char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].shape == 0)
		ft_wrti(map, shapes, p_nbr);
	if (shapes[p_nbr].shape == 1)
		ft_wrtj(map, shapes, p_nbr);
	if (shapes[p_nbr].shape == 2)
		ft_wrtl(map, shapes, p_nbr);
	if (shapes[p_nbr].shape == 3)
		ft_wrto(map, shapes, p_nbr);
	if (shapes[p_nbr].shape == 4)
		ft_wrts(map, shapes, p_nbr);
	if (shapes[p_nbr].shape == 5)
		ft_wrtt(map, shapes, p_nbr);
	if (shapes[p_nbr].shape == 6)
		ft_wrtz(map, shapes, p_nbr);
}

void	ft_solve(char **map, t_shapes *shapes, int p_nbr, t_pos *xy)
{
	while (shapes[p_nbr].shape >= 0)
	{
		while (ft_trypiece(shapes, map, p_nbr, xy) == 0)
		{
			xy->x++;
			if ((size_t)xy->x >= ft_strlen(map[0]))
			{
				xy->y++;
				xy->x = 0;
			}
			if ((size_t)xy->y >= ft_strlen(map[0]) && p_nbr == 0)
			{
				map = ft_bigger_pg(map);
				xy->x = 0;
				xy->y = 0;
			}
			else if ((size_t)xy->y == ft_strlen(map[0]))
			{
				p_nbr--;
				xy->x = shapes[p_nbr].x + 1;
				xy->y = shapes[p_nbr].y;
				ft_mod_tab(map, shapes, p_nbr);
			}
		}
		if (ft_trypiece(shapes, map, p_nbr, xy))
		{
			shapes[p_nbr].x = xy->x;
			shapes[p_nbr].y = xy->y;
			ft_mod_tab(map, shapes, p_nbr);
			p_nbr++;
			xy->x = 0;
			xy->y = 0;
		}
	}
	ft_print(map);
}
