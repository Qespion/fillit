/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 17:42:19 by groussel          #+#    #+#             */
/*   Updated: 2018/04/08 12:28:00 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

/*
** TODO:	[ ] Set loop functions pointer in checkshape
**			[ ] Free all malloc in strerror
**
** FUNC:	exit
**			open / close
**			malloc / free
**			write / read
**
** FIXME:	[ ] Nothing yet
*/

int		checkfile(t_shapes **shapes, char *file)
{
	char	*square;
	int		bytes;
	int		fd;
	int		i;

	if ((fd = open(file, O_RDONLY)) < 0)
		ft_strerror(shapes, 2);
	if (!(square = (char *)malloc(sizeof(*square) * 21)))
		return (0);
	i = -1;
	while ((bytes = read(fd, &square, 20)) > 0)
	{
		if ((shapes[++i]->shape = checkshape(square)) > 0)
		{
			shapes[i]->x = 0;
			shapes[i]->y = 0;
			shapes[i]->direction = 0;
		}
		else
			ft_strerror(shapes, 2);
		if ((bytes = read(fd, &square, 1)) > 0)		// pass the empty line
			;
	}
	return (1);
}

int		checkshape(char *square)
{
	printf("%s\n", square);
	//if (checkI(square))
	//	return ('I');
	/*if (checkJ(square))
		return ('J');
	if (checkL(square))
		return ('L');
	if (checkO(square))
		return ('O');
	if (checkS(square))
		return ('S');
	if (checkT(square))
		return ('T');
	if (checkZ(square))
		return ('Z');*/
	return (0);
}