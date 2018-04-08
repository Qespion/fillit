/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 17:42:19 by groussel          #+#    #+#             */
/*   Updated: 2018/04/08 17:20:18 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

/*
** TODO:	[X] Set loop functions pointer in checkshape
**			[X] Free all malloc in strerror
**
** FUNC:	exit
**			open / close
**			malloc / free
**			write / read
**
** FIXME:	[ ] Nothing yet
*/

int		checkfile(t_shapes **shapes, char **square, int fd)
{
	int		bytes;
	int		i;

	i = -1;
	while ((bytes = read(fd, &(*square), 20)) > 0)
	{
		if ((shapes[++i]->shape = checkshape(*square)) > 0)
		{
			shapes[i]->x = 0;
			shapes[i]->y = 0;
			shapes[i]->direction = 0;
		}
		else
			ft_strerror(*shapes, *square, fd, 2);
		if ((bytes = read(fd, &(*square), 1)) > 0)		// pass the empty line
			;
	}
	return (0);
}

int		checkshape(char *square)
{
	int		(*f[7])(char *square);
	int		i;

	f[0] = checkI;
	/*f[1] = checkJ;
	f[2] = checkL;
	f[3] = checkO;
	f[4] = checkS;
	f[5] = checkT;
	f[6] = checkZ;*/
	ft_putendl(square);
	i = -1;
	while (f[++i])
		if (f[i](square))
			return (i);
	return (-1);
}