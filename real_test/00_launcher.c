#include "../../framework/libunit.h"
#include "../../libft/libft.h"

int	memcpy_zero_len_test(void);

int	isdigit_alpha_test(void);
int	putendl_fd_empty_string_test(void);
int	putchar_fd_null_char_test(void);
int	calloc_zero_size_test(void);
int	putchar_fd_invalid_fd_test(void);
int	calloc_max_size_test(void);
int	memcpy_null_dest_test(void);
int	putendl_fd_null_string_test(void);
int	isdigit_symbol_test(void);
int	putnbr_fd_int_max_test(void);
int	tolower_symbol_test(void);
int	tolower_beyond_ascii_test(void);
int	putnbr_fd_int_min_test(void);
int	memcpy_return_value_test(void);


int	main_launcher(void)
{
	t_list	*test_list;
	int		result;

	result = 0;

	test_list = NULL;
	load_test(&test_list, "memcpy with zero length", &memcpy_zero_len_test);
	load_test(&test_list, "memcpy null dest", &memcpy_null_dest_test);
	load_test(&test_list, "memcpy return value", &memcpy_return_value_test);
	load_test(&test_list, "isdigit with alpha", &isdigit_alpha_test);
	load_test(&test_list, "isdigit with symbol", &isdigit_symbol_test);
	load_test(&test_list, "tolower with symbol", &tolower_symbol_test);
	load_test(&test_list, "tolower beyond ascii", &tolower_beyond_ascii_test);
	load_test(&test_list, "putchar_fd null char", &putchar_fd_null_char_test);
	load_test(&test_list, "putchar_fd invalid fd", &putchar_fd_invalid_fd_test);
	load_test(&test_list, "putendl_fd empty string", &putendl_fd_empty_string_test);
	load_test(&test_list, "putendl_fd null string", &putendl_fd_null_string_test);
	load_test(&test_list, "putnbr_fd INT_MAX", &putnbr_fd_int_max_test);
	load_test(&test_list, "putnbr_fd INT_MIN", &putnbr_fd_int_min_test);
	load_test(&test_list, "calloc zero size", &calloc_zero_size_test);
	load_test(&test_list, "calloc max size", &calloc_max_size_test);
	result += launch_tests("FT_CALLOC", &test_list);

	return (result);
}
