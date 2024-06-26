#Variables
NAME = libftprintf.a
INCLUDE = include
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude
RM = rm -rf

#Paths
SRCS	= ft_printf.c ft_print_digit.c ft_print_str.c

OBJECTS = $(SRCS:.c=.o)

#Rules
all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean:
	@echo "running clean"
	@rm -f $(OBJECTS)

fclean: clean
	@echo "running fclean"
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
