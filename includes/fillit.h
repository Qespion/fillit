/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 17:03:12 by groussel          #+#    #+#             */
/*   Updated: 2018/04/07 23:52:16 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h> 	// exit, malloc, free
# include <fcntl.h>		// open
# include <unistd.h>	// read, write, close
# include <stdio.h>		// printf

typedef struct		s_shapes
{
	int				shape;		// 'I', 'J', 'L', 'O', 'S', 'T', 'Z'
	int				x;
	int				y;
	char			direction;	// 'N', 'E', 'S', 'W'
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

void	ft_strerror(void);

int		checkfile(t_shapes **shapes, char *file);
int		checkshape(char *square);

int		checkI(char *square);
int		checkIH(char *square);
int		checkIV(char *square);

#endif