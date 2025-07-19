# Name of the executable
NAME = real_test_app

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source directory
SRCDIR = real_test

# List of source files (relative to SRCDIR)
SRCFILES = 00_launcher.c 01_alpha_test.c 02_empty_string_test.c 03_max_size_test.c \
           04_int_max_test.c 05_beyond_ascii_test.c 06_null_char_test.c 07_null_dest_test.c \
           08_null_string_test.c 09_symbol_test.c 10_symbol_test.c 11_zero_len_test.c \
           12_int_min_test.c 13_invalid_fd_test.c 14_return_value_test.c 15_zero_size_test.c \
           main.c

# Add full path to each file
SRC = $(addprefix $(SRCDIR)/, $(SRCFILES))

# Object files
OBJ = $(SRC:.c=.o)

# Build rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: all
	@./$(NAME)

.PHONY: all clean fclean re test

