/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 16:43:56 by groussel          #+#    #+#             */
/*   Updated: 2018/04/10 15:10:38 by groussel         ###   ########.fr       */
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
		ft_putendl(CT_GREEN CB_GREEN "error" C_RESET);
	free(shapes);
	free(square);
	close(fd);
	exit(EXIT_FAILURE);
}

void	printcolor(void)
{
		ft_putendl(CT_MAROON CB_MAROON "TOTOR" C_RESET);
		ft_putendl(CT_GREEN CB_GREEN "TOTOR" C_RESET);
		ft_putendl(CT_OLIVE CB_OLIVE "TOTOR" C_RESET);
		ft_putendl(CT_NAVY CB_NAVY "TOTOR" C_RESET);
		ft_putendl(CT_PURPLE CB_PURPLE "TOTOR" C_RESET);
		ft_putendl(CT_SILVER CB_SILVER "TOTOR" C_RESET);
		ft_putendl(CT_RED CB_RED "TOTOR" C_RESET);
		ft_putendl(CT_YELLOW CB_YELLOW "TOTOR" C_RESET);
		ft_putendl(CT_FUCHSIA CB_FUCHSIA "TOTOR" C_RESET);
		ft_putendl(CT_AQUA CB_AQUA "TOTOR" C_RESET);
		ft_putendl(CT_WHITE CB_WHITE "TOTOR" C_RESET);
		ft_putendl(CT_DARKBLUE CB_DARKBLUE "TOTOR" C_RESET);
		ft_putendl(CT_DSKYBLUE4 CB_DSKYBLUE4 "TOTOR" C_RESET);
		ft_putendl(CT_SPRINGREEN4 CB_SPRINGREEN4 "TOTOR" C_RESET);
		ft_putendl(CT_CYAN1 CB_CYAN1 "TOTOR" C_RESET);
		ft_putendl(CT_PURPLE4 CB_PURPLE4 "TOTOR" C_RESET);
		ft_putendl(CT_MTURQUOISE CB_MTURQUOISE "TOTOR" C_RESET);
		ft_putendl(CT_LIGHTPINK4 CB_LIGHTPINK4 "TOTOR" C_RESET);
		ft_putendl(CT_SLATEBLUE1 CB_SLATEBLUE1 "TOTOR" C_RESET);
		ft_putendl(CT_DEEPPINK4 CB_DEEPPINK4 "TOTOR" C_RESET);
		ft_putendl(CT_LSTEELBLUE CB_LSTEELBLUE "TOTOR" C_RESET);
		ft_putendl(CT_DARKORANGE3 CB_DARKORANGE3 "TOTOR" C_RESET);
		ft_putendl(CT_SALMON1 CB_SALMON1 "TOTOR" C_RESET);
		ft_putendl(CT_ORANGE1 CB_ORANGE1 "TOTOR" C_RESET);
		ft_putendl(CT_BLACK CB_BLACK "TOTOR" C_RESET);
		ft_putendl(CT_THISTLE1 CB_THISTLE1 "TOTOR" C_RESET);
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
	//start(shapes);
	printcolor();
	free(shapes);								// free the struct
	free(square);
	close(fd);
	return (EXIT_SUCCESS);
}
