# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oespion <oespion@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/07 16:25:30 by groussel          #+#    #+#              #
#    Updated: 2018/04/12 16:46:32 by oespion          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fillit

FLAGS	=	-Wall -Wextra -Werror

SRC_DIR	=	srcs/
OBJ_DIR =	objs/
INC_DIR	=	includes/
LIB_DIR	=	libft/

SRC_BAS	=	main.c		\
			check.c		\
			find.c		\
			tetrii.c	\
			tetrij.c	\
			tetril.c	\
			tetrio.c	\
			tetrit.c	\
			tetris.c	\
			tetriz.c	\
			ft_puti.c	\
			ft_putj.c	\
			ft_puti.c	\
			ft_puto.c	\
			ft_puts.c	\
			ft_putt.c	\
			ft_putz.c

SRCS	=	$(addprefix $(SRC_DIR), $(SRC_BAS))
OBJS	=	$(addprefix $(OBJ_DIR), $(SRC_BAS:.c=.o))

all:		$(NAME)

$(NAME):	$(OBJ_DIR) $(OBJS)
			make -C libft/
			gcc $(FLAGS) $(OBJS) -L libft/ -lft -o $(NAME)

$(OBJ_DIR):
			mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
			gcc $(FLAGS) -c $< -o $@ -I $(INC_DIR)

clean:
			make -C libft/ clean
			rm -rf $(OBJ_DIR)

fclean:		clean
			make -C libft/ fclean
			rm -f $(NAME)

re:			fclean all
