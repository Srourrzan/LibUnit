CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_isascii_test_runner
SRCS = 00_launcher.c \
       01_ascii_char_test.c \
       02_null_char_test.c \
       03_del_char_test.c \
       04_non_ascii_char_test.c \
       05_negative_char_test.c
OBJS = $(SRCS:.c=.o)
LIBFT_LIB = ../../../libft/libft.a
LIBUNIT_LIB = ../../../framework/libunit.a
INC_LIBFT = -I../../../libft
INC_LIBUNIT = -I../../framework
.PHONY: all clean fclean re test
all: $(NAME)
$(NAME): $(OBJS) $(LIBFT_LIB) $(LIBUNIT_LIB)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_LIB) $(LIBUNIT_LIB) -o $(NAME)
%.o: %.c
	$(CC) $(CFLAGS) $(INC_LIBFT) $(INC_LIBUNIT) -c $< -o $@
$(LIBFT_LIB):
	$(MAKE) -C ../../../libft
$(LIBUNIT_LIB):
	$(MAKE) -C ../../../framework
test: $(NAME)
	./$(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all