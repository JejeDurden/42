# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/11 10:38:56 by jdesmare          #+#    #+#              #
#*   Updated: 2016/11/25 15:20:27 by jdesmare         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = gcc $(FLAGS)

FLAGS = -Wall -Werror -Wextra -g

INCLUDES = ./includes/

SRC =	main.c						\
		ft_reader.c					\
		ft_create_list.c			\
		ft_check_tetri.c			\
		ft_check_lines.c			\
		ft_valid_char.c				\
		ft_check_size.c				\
		ft_check_first_tetri_line.c	\
		ft_check_hashtag_pos.c		\
		ft_check_next_tetri_line.c	\
		ft_check0.c					\
		ft_check1.c					\
		ft_check2.c					\
		ft_check3.c					\
		ft_check_reader.c			\
		ft_build_lst.c				\
		ft_fillit.c					\
		ft_find1.c					\
		ft_find2.c					\
		ft_find3.c					\
		ft_lst_pushback.c			\
		ft_lst_tetrinew.c			\
		ft_map.c					\
		ft_put_fourth.c				\
		ft_put_second.c				\
		ft_put_tetri.c				\
		ft_put_third.c				\
		ft_solver.c					\
		ft_write_map.c				\
		ft_clear_map.c				\
		ft_list_size.c				\
		ft_sqrt.c					\
		ft_free_list.c				\
		ft_backtrack.c				\
		ft_backiter.c				\
		ft_iter.c					\
		ft_select_tetri.c			\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@make -C ./libft/
	@$(CC) $(CFLAGS) -I$(INCLUDES) -c $(SRC)
	@$(CC) $(CFLAGS) -L./libft/ -lft $(OBJ) -o $(NAME)

%.o : %.c
	gcc -c $< -o $@
	@echo "$(NAME) created successfully"

clean:
	@make clean -C ./libft/
	@echo "Erasing .o files..."
	@rm -f $(OBJ)
	@echo "Done."

fclean: clean
	@make fclean -C ./libft/
	@echo "Erasing $(NAME)..."
	@rm -f $(NAME) $(LIB)
	@echo "Done."

re: fclean all clean
