/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 03:52:17 by groussel          #+#    #+#             */
/*   Updated: 2018/04/13 17:41:53 by oespion          ###   ########.fr       */
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

char	**ft_playground(int p_nbr)
{
	int		base;
	int		r;
	int		i;
	char	**tab;

	r = 0;
	i = 0;
	base = p_nbr * 4;
	while (ft_sqrt(base) == 0)
		base++;
	base = ft_sqrt(base);
	printf("-%d-\n", base);
	if (!(tab = (char**)malloc(sizeof(char*) * (base + 1))))
		return (NULL);
	while (i < base)
	{
		if (!(tab[i] = (char*)malloc(sizeof(char) * (base + 1))))
			return (NULL);
		while (r < base)
			tab[i][r++] = '.';
		tab[i][r] = '\0';
		i++;
		r = 0;
	}
	tab[i] = NULL;
	return (tab);
}

int	ft_is_valid(char **map, int x, int y)
{
	if (map[x][y] == '.')
	{
		if (x >= 0 && y >= 0)
			return (1);
	}
	return (0);
}

void	ft_trypiece(t_shapes *shapes, char **map, int p_nbr, int x, int y)
{
	int valid;

	valid = 0;
	if (shapes[p_nbr].shape == 0)
		valid = ft_putI(x, y, map, shapes, p_nbr);
	if (shapes[p_nbr].shape == 1)
		valid = ft_putJ(x, y, map, shapes, p_nbr);
	if (shapes[p_nbr].shape == 2)
		valid = ft_putL(x, y, map, shapes, p_nbr);
	if (shapes[p_nbr].shape == 3)
		valid = ft_putO(x, y, map);
	if (shapes[p_nbr].shape == 4)
		valid = ft_putS(x, y, map, shapes, p_nbr);
	if (shapes[p_nbr].shape == 5)
		valid = ft_putT(x, y, map, shapes, p_nbr);
	if (shapes[p_nbr].shape == 6)
		valid = ft_putZ(x, y, map, shapes, p_nbr);
	printf("%d\n", valid);
}

int		start(t_shapes *shapes)
{
	char	**map;
	int		p_nbr;
	int		r;
	int		i;

	r = 0;
	i = 0;
	p_nbr = 0;
	while (shapes[p_nbr].letter)
		p_nbr++;
	printf("nombre de piece :%d\n", p_nbr);
	map = ft_playground(p_nbr);
	while (map[r])
	{
		while (map[r][i])
		{
			ft_putchar(map[r][i]);
			i++;
		}
		ft_putchar('\n');
		r++;
		i = 0;
	}
	ft_trypiece(shapes, map, p_nbr, 1, 1);
	return (0);
}
