/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 16:43:56 by groussel          #+#    #+#             */
/*   Updated: 2018/04/07 23:56:19 by groussel         ###   ########.fr       */
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

void	ft_strerror(void)
{
	ft_putendl(CT_RED CB_YELLOW "error" C_RESET);
	exit(EXIT_FAILURE);
}

int		main(int ac, char **av)
{
	t_shapes		*shapes;

	if (!(shapes = (t_shapes *)malloc(sizeof(*shapes))))
		return (1);
	if (ac != 2)
		ft_strerror();
	if (!checkfile(&shapes, av[1]))
		ft_strerror();
	free(shapes);
	//while (1)				// Pour tester les leaks
	//	;					//
	// https://forum.intra.42.fr/topics/18507/messages?page=1#86363
	return (0);
}