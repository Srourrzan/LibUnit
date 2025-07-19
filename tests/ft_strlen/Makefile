# _*_ MakeFile _*_
NAME = ft_strlen_tests.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I../../libft -I../../framework
SRCS = 	00_launcher.c 		\
	01_ok_test.c 			\
	02_ko_test.c			\
	03_segv_test.c 			\
	04_bus_test.c

OBJS = $(SRCS:.c=.o)
AR = ar rcs

all = $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re