# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: groussel <groussel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/07 16:25:30 by groussel          #+#    #+#              #
#    Updated: 2018/04/08 14:11:24 by groussel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fillit

FLAGS	=	-Wall -Wextra -Werror
FLAGSD	=	-Wall -Wextra -Werror -g

SRC_DIR	=	srcs/
OBJ_DIR =	objs/
INC_DIR	=	includes/
LIB_DIR	=	libft/

SRC_BAS	=	main.c		\
			check.c		\
			tetrii.c

SRCS	=	$(addprefix $(SRC_DIR), $(SRC_BAS))
OBJS	=	$(addprefix $(OBJ_DIR), $(SRC_BAS:.c=.o))

all:		$(NAME)

$(NAME):	$(OBJ_DIR) $(OBJS)
			make -C libft/ fclean
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
