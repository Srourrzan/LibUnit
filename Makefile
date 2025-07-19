CC = cc
CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re test build_test_runners

TEST_SUITES = ft_bzero \
              ft_isalpha \
              ft_isprint \
              ft_putendl_fd \
              ft_strlen \
              ft_calloc \
              ft_isascii \
              ft_memcpy \
              ft_putnbr_fd \
              ft_tolower \
              ft_isalnum \
              ft_isdigit \
              ft_putchar_fd \
              ft_putstr_fd \
              ft_toupper

NAME = run_all_tests

MAIN_SRC = main.c
MAIN_OBJ = $(MAIN_SRC:.c=.o)

LIBFT_DIR = libft
FRAMEWORK_DIR = framework

all: $(NAME)

$(NAME): $(MAIN_OBJ)
	$(CC) $(CFLAGS) $(MAIN_OBJ) -o $(NAME)

$(MAIN_OBJ): $(MAIN_SRC)
	$(CC) $(CFLAGS) -c $< -o $@

build_test_runners:
	$(MAKE) -C $(LIBFT_DIR)
	$(MAKE) -C $(FRAMEWORK_DIR)
	@for dir in $(TEST_SUITES); do \
		$(MAKE) -C real-tests/$$dir; \
	done

test: build_test_runners $(NAME)
	@echo "\n==================================="
	@echo "   STARTING ALL LIBUNIT TESTS    "
	@echo "===================================\n"
	./$(NAME)
	@echo "\n==================================="
	@echo "   ALL LIBUNIT TESTS COMPLETED   "
	@echo "==================================="

clean:
	@for dir in $(TEST_SUITES); do \
		$(MAKE) -C real-tests/$$dir clean; \
	done
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(FRAMEWORK_DIR) clean
	rm -f $(MAIN_OBJ)

fclean: clean
	@for dir in $(TEST_SUITES); do \
		$(MAKE) -C real-tests/$$dir fclean; \
	done
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(FRAMEWORK_DIR) fclean
	rm -f $(NAME)

re: fclean all