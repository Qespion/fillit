/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puti.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 16:58:26 by oespion           #+#    #+#             */
/*   Updated: 2018/04/16 13:25:05 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	ft_putin(int x, int y, char **map)
{
	int	i;
	int	is_valid;

	is_valid = 1;
	i = 0;
	while (i < 4 && is_valid == 1)
	{
		is_valid = ft_is_valid(map, x, y);
		x++;
		i++;
	}
	if (i == 4)
		return (1);
	return (0);
}

int	ft_putie(int x, int y, char **map)
{
	int	i;
	int	is_valid;

	is_valid = 1;
	i = 0;
	while (i < 4 && is_valid == 1)
	{
		is_valid = ft_is_valid(map, x, y);
		y++;
		i++;
	}
	if (i == 4)
		return (1);
	return (0);
}

int	ft_putI(int x, int y, char **map, t_shapes *shapes, int p_nbr)
{
	int	is_valid;

	is_valid = 0;
	if (shapes[p_nbr].direction == 0)
		is_valid = ft_putin(x, y, map);
	else if (shapes[p_nbr].direction == 1)
		is_valid = ft_putie(x, y, map);
	if (is_valid == 1)
		return (1);
	return (0);
}
