/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrij.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 22:25:40 by groussel          #+#    #+#             */
/*   Updated: 2018/04/08 22:54:09 by groussel         ###   ########.fr       */
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

int		checkJ(char **tab)
{
	if (!checkJN(tab) && !checkJE(tab) && !checkJS(tab) && !checkJW(tab))
		return (0);
	return (1);
}

//  #
//  #
// ##

int		checkJN(char **tab)
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
					tab[y + 2][x] == '#' && tab[y + 2][x - 1] == '#')
				return (1);
		}
	}
	return (0);
}

// #
// ###

int		checkJE(char **tab)
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
					tab[y + 1][x + 1] == '#' && tab[y + 1][x + 2] == '#')
				return (1);
		}
	}
	return (0);
}

// ##
// #
// #

int		checkJS(char **tab)
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
					tab[y + 1][x] == '#' && tab[y + 2][x] == '#')
				return (1);
		}
	}
	return (0);
}

// ###
//   #

int		checkJW(char **tab)
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
					tab[y][x + 2] == '#' && tab[y + 1][x + 2] == '#')
				return (1);
		}
	}
	return (0);
}