/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 23:12:22 by groussel          #+#    #+#             */
/*   Updated: 2018/04/08 23:20:16 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** TODO:	[X] Check north
**			[X] Check east
**			[X] Check south
**			[X] Check west
**
** FIXME:	[ ] Nothing yet
*/

#include "fillit.h"
#include "libft.h"

int		checkT(char **tab)
{
	if (!checkTN(tab) && !checkTE(tab) && !checkTS(tab) && !checkTW(tab))
		return (0);
	return (1);
}

//  #
// ###

int		checkTN(char **tab)
{
	int		x;
	int		y;

	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
		{
			if (tab[y][x] == '#' && tab[y + 1][x - 1] == '#' &&
					tab[y + 1][x] == '#' && tab[y + 1][x + 1] == '#')
				return (1);
		}
	}
	return (0);
}

// #
// ##
// #

int		checkTE(char **tab)
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
					tab[y + 1][x + 1] == '#' && tab[y + 2][x] == '#')
				return (1);
		}
	}
	return (0);
}

// ###
//  #

int		checkTS(char **tab)
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
					tab[y + 1][x + 1] == '#' && tab[y][x + 2] == '#')
				return (1);
		}
	}
	return (0);
}

//  #
// ##
//  #

int		checkTW(char **tab)
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
					tab[y + 1][x - 1] == '#' && tab[y + 2][x] == '#')
				return (1);
		}
	}
	return (0);
}