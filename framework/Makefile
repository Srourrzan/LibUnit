
CC = cc
CFLAGS = -Wall -Wextra -Werror -I../libft

NAME = libunit.a


SRCS = \
	load_test.c \
	get_status_string.c \
	free_unit_test_content.c \
	launch_tests.c


OBJS = $(SRCS:.c=.o)

AR = ar rcs

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re

all: $(NAME)


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all