NAME = libft.a

SRC_DIR = src
INC_DIR = includes

BONUS_SRCS = $(wildcard ft_lst*.c)
SRCS = $(filter-out $(BONUS_SRCS), $(wildcard ft_*.c))
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

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

bonus: $(BONUS_OBJS)
	$(AR) $(ARFLAGS) $(NAME) $^

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re