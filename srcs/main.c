/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 16:43:56 by groussel          #+#    #+#             */
/*   Updated: 2018/04/08 12:27:47 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** TODO:	[X] Check args
**			[X] Error and exit function
**			[X] Define colors
**			[X] Check if file exist
**			[ ] Set array to doule array
**			[ ] Check I shape
**			[ ] Check J shape
**			[ ] Check L shape
**			[ ] Check O shape
**			[ ] Check S shape
**			[ ] Check T shape
**			[ ] Check Z shape
**
** FUNC:	exit
**			open / close
**			malloc / free
**			write / read
**
** BONUS:	[ ] Colors
**
** FIXME:	[ ] Nothing yet
*/

#include "fillit.h"
#include "libft.h"

void	ft_strerror(t_shapes **shapes, int code)
{
	if (code == 1)
		ft_putendl("usage: ./fillit source_file");
	else
		ft_putendl(CT_RED CB_YELLOW "error" C_RESET);
	free(shapes);
	exit(EXIT_FAILURE);
}

int		main(int ac, char **av)
{
	t_shapes		*shapes;
	int				error;

	error = 0;
	if (!(shapes = (t_shapes *)malloc(sizeof(*shapes))))
		return (1);
	if (ac != 2)
		ft_strerror(&shapes, 1);
	if (!checkfile(&shapes, av[1]))
		ft_strerror(&shapes, 2);
	free(shapes);
	return (0);
}
