NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes
HEADER = includes/libft.h includes/printf.h includes/gnl.h
CFILES = $(shell find src -type f -name "*.c")
OBJECTS = $(SRC:src/%.c=obj/%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		ar rcs $(NAME) $(OBJECTS)

obj/%.o: src/%.c $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJECTS) 

fclean: clean
		rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re