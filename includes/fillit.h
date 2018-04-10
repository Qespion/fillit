/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 17:03:12 by groussel          #+#    #+#             */
/*   Updated: 2018/04/10 13:13:37 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h> 	// exit, malloc, free
# include <fcntl.h>		// open
# include <unistd.h>	// read, write, close
# include <stdio.h>		// printf

typedef struct		s_shapes
{								//  0    1    2    3    4    5    6
	int				shape;		// 'I', 'J', 'L', 'O', 'S', 'T', 'Z'
	int				x;
	int				y;
	int				direction;	// 'N', 'E', 'S', 'W'
	int				set;		// 1 or 0
	int				letter;
}					t_shapes;

// Reset colors
# define C_RESET         "\033[0m"

// Colors
# define CT_BLACK		"\033[30m"
# define CT_RED			"\033[31m"
# define CT_GREEN		"\033[32m"
# define CT_YELLOW		"\033[33m"
# define CT_BLUE		"\033[34m"
# define CT_MAGENTA		"\033[35m"
# define CT_CYAN		"\033[36m"
# define CT_WHITE		"\033[37m"

// Backgrounds colors
# define CB_BLACK		"\033[40m"
# define CB_RED			"\033[41m"
# define CB_GREEN		"\033[42m"
# define CB_YELLOW		"\033[43m"
# define CB_BLUE		"\033[44m"
# define CB_MAGENTA		"\033[45m"
# define CB_CYAN		"\033[46m"
# define CB_WHITE		"\033[47m"

// Main.c
void	ft_strerror(t_shapes *shapes, char *square, int fd, int code);
int		setmap(char ***map);

// Check.c
int		checkfile(t_shapes *shapes, char **square, int fd);
int		checkshape(char *square);
int		checkchars(char *square);

// Find.c
int		start(t_shapes *shapes);

// Tetrii.c
int		checkI(char **tab);
int		checkIN(char **tab);
int		checkIE(char **tab);

// Tetrij.c
int		checkJ(char **tab);
int		checkJN(char **tab);
int		checkJE(char **tab);
int		checkJS(char **tab);
int		checkJW(char **tab);

// Tetril.c
int		checkL(char **tab);
int		checkLN(char **tab);
int		checkLE(char **tab);
int		checkLS(char **tab);
int		checkLW(char **tab);

// Tetrio.c
int		checkO(char **tab);
int		checkON(char **tab);

// Tetrit.c
int		checkT(char **tab);
int		checkTN(char **tab);
int		checkTE(char **tab);
int		checkTS(char **tab);
int		checkTW(char **tab);

// Tetris.c
int		checkS(char **tab);
int		checkSN(char **tab);
int		checkSE(char **tab);

// Tetriz.c
int		checkZ(char **tab);
int		checkZN(char **tab);
int		checkZE(char **tab);

#endif