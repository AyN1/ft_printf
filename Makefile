libft:
	$(MAKE) -C libft

#Variables
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

#Paths
SRCS	= ft_printf.c

OBJECTS = $(SRCS:.c=.o)

#Rules
all: libft $(NAME)

$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)

clean:
	@echo "running clean"
	@rm -f $(OBJECTS)

fclean: clean
	@echo "running fclean"
	@rm -f $(NAME)

re: fclean all
