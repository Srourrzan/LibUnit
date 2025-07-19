# Name of the executable
NAME = real_test_app

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source files and object files
SRCDIR = real_test
SRC = 00_launcher.c    02_empty_string_test.c  04_int_max_test.c       06_null_char_test.c  08_null_string_test.c  10_symbol_test.c  \
 	12_int_min_test.c     14_return_value_test.c  main.c \
	01_alpha_test.c  03_max_size_test.c      05_beyond_ascii_test.c \
	07_null_dest_test.c  09_symbol_test.c       11_zero_len_test.c  \
	13_invalid_fd_test.c  15_zero_size_test.c 

OBJ = $(SRC:.c=.o)

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

test: all 
	@./$(NAME)
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all 

.PHONY: all clean fclean re test
