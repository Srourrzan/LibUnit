# Name of the executable
NAME = real_test_app

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source files and object files
SRCDIR = real_test
SRC =  00_launcher.c  01_ok_test.c  02_ko_test.c  03_segv_test.c  04_bus_test.c  main.c 
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
