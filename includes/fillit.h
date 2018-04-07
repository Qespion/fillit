/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 17:03:12 by groussel          #+#    #+#             */
/*   Updated: 2018/04/07 22:51:57 by groussel         ###   ########.fr       */
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

void	ft_strerror(void);

int		checkfile(t_shapes **shapes, char *file);
int		checkshape(char *square);

int		checkI(char *square);
int		checkIH(char *square);
int		checkIV(char *square);

#endif