# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: latabagl <latabagl@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/04 13:53:47 by latabagl          #+#    #+#              #
#    Updated: 2025/08/08 23:29:45 by latabagl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror
HEADER = includes/push_swap.h
SRC = push_swap.c \
      operations/push.c \
      operations/swap.c \
      operations/rotate.c \
      operations/reverse_rotate.c \
      algo/sort2.c \
      algo/selection_sort.c \
      utils/parse_arguments.c \
      utils/push_swap_utils.c \
      utils/is_sorted.c
SRC_DIR = src
OBJ_DIR = obj
OBJECTS = $(SRC:src/%.c=obj/%.o)
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
INCLUDES = -I$(LIBFT_DIR) -Iincludes

all: $(NAME)

$(NAME): $(OBJECTS)
		$(MAKE) -C $(LIBFT_DIR)
		$(CC) $(FLAGS) $(OBJECTS) $(LIBFT) -o $(NAME)
		
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
		mkdir -p $(dir $@)
		$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
		$(MAKE) clean -C $(LIBFT_DIR)
		rm -rf $(OBJECTS) 

fclean: clean
		$(MAKE) fclean -C $(LIBFT_DIR)
		rm -f $(NAME) 
		
re: clean fclean all