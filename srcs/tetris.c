/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetris.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 23:22:10 by groussel          #+#    #+#             */
/*   Updated: 2018/04/08 23:28:21 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** TODO:	[X] Check north
**			[X] Check east
**
** FIXME:	[ ] Nothing yet
*/

#include "fillit.h"
#include "libft.h"

int		checkS(char **tab)
{
	if (!checkSN(tab) && !checkSE(tab))
		return (0);
	return (1);
}

// #
// ##
//  #

int		checkSN(char **tab)
{
	int		x;
	int		y;

	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
		{
			if (tab[y][x] == '#' && tab[y + 1][x] == '#' &&
					tab[y + 1][x + 1] == '#' && tab[y + 2][x + 1] == '#')
				return (1);
		}
	}
	return (0);
}

//  ##
// ##

int		checkSE(char **tab)
{
	int		x;
	int		y;

	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
		{
			if (tab[y][x] == '#' && tab[y][x + 1] == '#' &&
					tab[y + 1][x - 1] == '#' && tab[y + 1][x] == '#')
				return (1);
		}
	}
	return (0);
}
