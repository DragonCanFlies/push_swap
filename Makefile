# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: latabagl <latabagl@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/04 13:53:47 by latabagl          #+#    #+#              #
#    Updated: 2025/08/04 13:55:26 by latabagl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I includes

# Directories
SRC_DIR = src
OBJ_DIR = obj
INCLUDES = includes

# Source files
SRC = $(SRC_DIR)/push_swap.c \
      $(SRC_DIR)/operations/push.c \
      $(SRC_DIR)/operations/swap.c \
      $(SRC_DIR)/operations/rotate.c \
      $(SRC_DIR)/operations/reverse_rotate.c \
      $(SRC_DIR)/algo/sort2.c \
      $(SRC_DIR)/algo/selection_sort.c \
      $(SRC_DIR)/utils/parse_arguments.c \
      $(SRC_DIR)/utils/push_swap_utils.c \
      $(SRC_DIR)/utils/is_sorted.c \
      $(SRC_DIR)/utils/free.c

# Object files
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Executable
NAME = push_swap

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "✅ Build complete!"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "🧹 Object files removed."

fclean: clean
	@rm -f $(NAME)
	@echo "🗑 Executable removed."

re: fclean all

.PHONY: all clean fclean re