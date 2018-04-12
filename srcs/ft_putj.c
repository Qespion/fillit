/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putj.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 21:19:09 by oespion           #+#    #+#             */
/*   Updated: 2018/04/12 16:32:50 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	ft_putJN(int x, int y, char **map, t_shapes *shapes)
{
	int	i;
	int	is_valid;

	i = 0;
	is_valid = 1;
	while (i < 3 && is_valid == 1)
	{
		is_valid = ft_is_valid(map, x, y);
		y++;
		i++;
	}
	if (is_valid == 1)
	{
		x--;
		is_valid = ft_is_valid(map, x, y - 1);
	}
	if (is_valid == 1)
		return (1);
	return (0);
}

int	ft_putJS(int x, int y, char **map, t_shapes *shapes)
{
	int	i;
	int	is_valid;

	i = 0;
	is_valid = ft_is_valid(map, x + 1, y);
	while (i < 3 && is_valid == 1)
	{
		is_valid = ft_is_valid(map, x, y);
		y++;
		i++;
	}
	if (is_valid == 1)
		return (1);
	return (0);
}

int	ft_putJE(int x, int y, char **map, t_shapes *shapes)
{
	int	i;
	int	is_valid;

	i = 0;
	is_valid = ft_is_valid(map, x, y);
	y++;
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y);
	x++;
	while (is_valid == 1 && i < 2)
	{
		is_valid = ft_is_valid(map, x, y);
		x++;
		i++;
	}
	if (is_valid == 1)
		return (1);
	return (0);
}

int	ft_putJW(int x, int y, char **map, t_shapes *shapes)
{
	int	i;
	int	is_valid;

	i = 0;
	is_valid = 1;
	while (is_valid == 1 && i < 3)
	{
		is_valid = ft_is_valid(map, x, y);
		i++;
		x++;
	}
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x - 1, y + 1);
	if (is_valid == 1)
		return (1);
	return (0);
}

int	ft_putJ(int x, int y, char **map, t_shapes *shapes, int p_nbr)
{
	int	is_valid;

	if (shapes[p_nbr].direction == 0)
		is_valid = ft_putJN(x, y, map, shapes);
	if (shapes[p_nbr].direction == 1)
		is_valid = ft_putJE(x, y, map, shapes);
	if (shapes[p_nbr].direction == 2)
		is_valid = ft_putJS(x, y, map, shapes);
	if (shapes[p_nbr].direction == 3)
		is_valid = ft_putJW(x, y, map, shapes);
	return (is_valid);
}