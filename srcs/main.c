/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 16:43:56 by groussel          #+#    #+#             */
/*   Updated: 2018/04/09 01:51:37 by groussel         ###   ########.fr       */
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
		ft_putendl(CT_RED CB_YELLOW "error" C_RESET);
	free(shapes);
	free(square);
	close (fd);
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
	if (ac != 2)								// error if there's not 2 args
		ft_strerror(shapes, square, 0, 1);
	if ((fd = open(av[1], O_RDONLY)) < 0)
		ft_strerror(shapes, square, fd, 2);
	if (!checkfile(shapes, &square, fd))		// error if one shape in file is invalid
		ft_strerror(shapes, square, fd, 2);
	//int i = -1;								// roam all structures (test)
	//while (shapes[++i].shape != -1)
	//	ft_putnbr(shapes[i].shape);
	free(shapes);								// free the struct
	free(square);
	close (fd);
	return (EXIT_SUCCESS);
}
