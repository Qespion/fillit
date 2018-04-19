/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 16:43:56 by groussel          #+#    #+#             */
/*   Updated: 2018/04/19 10:01:10 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** TODO:	[X] Check args
**			[X] Error and exit function
**			[X] Define colors
**			[X] Check if file exist
**			[X] Set array to doule array
**
** FUNC:	exit
**			open / close
**			malloc / free
**			write / read
**
** BONUS:	[ ] Colors
**			[ ] No leaks
**
** FIXME:	[X] Segv if files are passed in arguments
*/

#include "fillit.h"
#include "libft.h"

void	ft_strerror(t_shapes *shapes, char *square, int fd, int code)
{
	if (code == 1)
		ft_putendl("usage: ./fillit source_file");
	else
		ft_putendl("error");
	free(shapes);
	free(square);
	close(fd);
	exit(EXIT_FAILURE);
}

int		main(int ac, char **av)
{
	t_shapes		*shapes;
	char			*square;
	int				fd;

	if (!(shapes = (t_shapes *)malloc(sizeof(*shapes) * 27)))
		return (EXIT_FAILURE);
	if (!(square = ft_strnew(20)))
		return (EXIT_FAILURE);
	if (ac != 2)
		ft_strerror(shapes, square, 0, 1);
	if ((fd = open(av[1], O_RDONLY)) < 0)
		ft_strerror(shapes, square, fd, 2);
	if (!checkfile(shapes, &square, fd))
		ft_strerror(shapes, square, fd, 2);
	start(shapes);
	close(fd);
	return (EXIT_SUCCESS);
}
