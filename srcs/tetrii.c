/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrii.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 20:10:44 by groussel          #+#    #+#             */
/*   Updated: 2018/04/08 18:25:50 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  ####
**
**	#
**	#
**	#
**	#
*/

#include "fillit.h"

int		checkI(char **tab)
{
	if (!checkIH(tab) || !checkIV(tab))
		return (0);
	return (1);
}

int		checkIH(char **tab)				// check shape horizontaly
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

int		checkIV(char **tab)				// check shape verticaly
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
