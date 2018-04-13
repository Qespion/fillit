/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 14:43:38 by oespion           #+#    #+#             */
/*   Updated: 2018/04/13 15:35:46 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

/* #
** ##
**  #
*/
int	ft_putsV(int x, int y, char **map)
{
	int	i;
	int	is_valid;

	i = 0;
	is_valid = ft_is_valid(map, x, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y + 2);
	if (is_valid == 1)
		return (1);
	return (0);
}

/*  ##
** ##
*/
int	ft_putsH(int x, int y, char **map)
{
	int	i;
	int	is_valid;

	i = 0;
	is_valid = ft_is_valid(map, x, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x - 1, y + 1);
	if (is_valid == 1)
		return (1);
	return (0);
}

int	ft_putS(int x, int y, char **map, t_shapes *shapes, int p_nbr)
{
	int	is_valid;

	is_valid = 0;
	if (shapes[p_nbr].direction == 0
		|| shapes[p_nbr].direction == 2)
		is_valid = ft_putsV(x, y, map);
	else if (shapes[p_nbr].direction == 1
		|| shapes[p_nbr].direction == 3)
		is_valid = ft_putsH(x, y, map);
	if (is_valid == 1)
		return (1);
	return (0);
}