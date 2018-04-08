/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrii.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 20:10:44 by groussel          #+#    #+#             */
/*   Updated: 2018/04/09 01:14:19 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** TODO:	[X] Check horizontaly
**			[X] Check verticaly
**
** FIXME:	[X] Segv
*/

#include "fillit.h"
#include "libft.h"

int		checkI(char **tab)
{
	if (!checkIH(tab) && !checkIV(tab))
		return (0);
	return (1);
}

// ####

int		checkIH(char **tab)
{
	int		y;

	y = -1;
	while (++y < 4)
	{
		if (tab[y][0] == '#' && tab[y][1] == '#' && tab[y][2] == '#'
				&& tab[y][3] == '#')
				return (1);
	}
	return (0);
}

// #
// #
// #
// #

int		checkIV(char **tab)
{
	int		x;

	x = -1;
	while (++x < 4)
	{
		if (tab[0][x] == '#' && tab[1][x] == '#' && tab[2][x] == '#'
				&& tab[3][x] == '#')
				return (1);
	}
	return (0);
}
