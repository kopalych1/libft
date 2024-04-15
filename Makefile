NAME = libft.a

SRC_DIR = src
INC_DIR = includes

SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
    $(AR) $(ARFLAGS) $@ $^

%.o: %.c
    $(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
    $(RM) $(OBJS)

fclean: clean
    $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re