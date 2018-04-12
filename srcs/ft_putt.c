/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 13:57:21 by oespion           #+#    #+#             */
/*   Updated: 2018/04/12 14:47:59 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

/*  #
** ###
*/
int	ft_puttN(int x, int y, char **map)
{
	int is_valid;

	is_valid = ft_is_valid(map, x, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x - 1, y - 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x - 1, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x - 1, y + 1);
	if (is_valid == 1)
		return (1);
	return (0);
}

/* #
** ##
** #
*/
int	ft_puttE(int x, int y, char **map)
{
	int	i;
	int	is_valid;

	i = 0;
	is_valid = 1;
	while (i < 3 && is_valid == 1)
	{
		is_valid = ft_is_valid(map, x, y);
		y--;
		i++;
	}
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y - 2);
	if (is_valid == 1)
		return (1);
	return (0);
}

/* ###
**  #
*/
int	ft_puttS(int x, int y, char **map)
{
	int	i;
	int	is_valid;

	i = 0;
	is_valid = 1;
	while (i < 3 && is_valid == 1)
	{
		is_valid = ft_is_valid(map, x, y);
		x++;
		i++;
	}
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x - 2, y - 1);
	if (is_valid == 1)
		return (1);
	return (0);
}

/*  #
** ##
**  #
*/
int	ft_puttW(int x, int y, char **map)
{
	int	i;
	int	is_valid;

	i = 0;
	is_valid = 1;
	while (i < 3 && is_valid == 1)
	{
		is_valid = ft_is_valid(map, x, y);
		i++;
		y++;
	}
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x - 1, y - 2);
	if (is_valid == 1)
		return (1);
	return (0);
}

int	ft_putt(int x, int y, char **map, t_shapes *shapes, int p_nbr)
{
	int	is_valid;

	is_valid = 0;
	if (shapes[p_nbr].direction == 0)
		is_valid = ft_puttN(x, y, map, shapes);
	if (shapes[p_nbr].direction == 0)
		is_valid = ft_puttE(x, y, map, shapes);
	if (shapes[p_nbr].direction == 0)
		is_valid = ft_puttS(x, y, map, shapes);
	if (shapes[p_nbr].direction == 0)
		is_valid = ft_puttW(x, y, map, shapes);
	if (is_valid == 1)
		return (1);
	return (0);
}