/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 03:52:17 by groussel          #+#    #+#             */
/*   Updated: 2018/04/12 17:10:01 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** TODO:	[ ] Start at the top left
**			[ ] If you can't put, x++
**			[ ] If space between first and second shape, x = 0 and y++
**			[ ] If still impossible, backtracking (reser letters, pass to next shape)
**			https://medium.com/@andreaiacono/backtracking-explained-7450d6ef9e1a
**			https://www.wikiwand.com/fr/Algorithme_de_remplissage_par_diffusion
**			[ ] If still impossible (shape reach border), add 1*1 to the map
**
** FUNC:	exit
**			open / close
**			malloc / free
**			write / reads
**
** FIXME:	[ ] Nothing yet
*/

#include "fillit.h"
#include "libft.h"

char	**ft_playground(void)
{
	char	**tab;
	int		i;
	int		r;

	r = 0;
	i = 0;
	if (!(tab = (char**)malloc(sizeof(**tab) * 15)))
		return (NULL);
	while (i < 15)
	{
		if (!(tab[i] = (char*)malloc(sizeof(*tab) * 15)))
			return (NULL);
		while (tab[i])
		{
			tab[i][r] = '.';
			r++;
			i++;
		}
		r = 0;
	}
	return (tab);
}

int	ft_is_valid(char *map, int x, int y)
{
	if (map[x][y] == NULL)
	{
		if (x >= 0 && y >= 0)
			return (1);
	}
	return (0);
}

void	ft_trypiece(t_shapes *shapes, char **map, int p_nbr)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (shapes[p_nbr].shape == 0)
		ft_putI(int x, int y, char **map, p_nbr);
}

int		start(t_shapes *shapes)
{
	char	**map;
	int		p_nbr;

	p_nbr = 0;
	while (shapes[p_nbr].shape)
		++p_nbr;
	map = ft_playground();
	ft_trypiece(shapes, map, p_nbr);
	//printf("%d\n", shapes[0].shape);
	return (0);
}
