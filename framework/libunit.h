#ifndef LIBUNIT_H
# define LIBUNIT_H


# include <unistd.h>     // fork, _exit, write, read (though ft_put*fd covers most output)
# include <sys/wait.h>   // waitpid, WIFEXITED, WEXITSTATUS, WIFSIGNALED, WTERMSIG
# include <stdlib.h>     // malloc, free, exit (explicitly allowed)
# include <signal.h>     // SIGSEGV, SIGBUS, and others for bonus
# include "../libft/libft.h"

// test result status codes
// // These are internal codes used by the framework to represent test outcomes.


# define LU_OK		0
# define LU_KO		1
# define LU_SIGSEGV 	2
# define LU_SIGBUS 	3
# define LU_TIMEOUT	4   // for bonus test
# define LU_ABPT 	5   // bonus SIGABRT
# define LU_FPE 	6   // bonus SIGFPE
# define LU_PIPE 	7   // bonus SIGPIPE
# define LU_ILL	 	8   // bonus SIGILL
# define LU_ERROR 	9   // for internal framework errors


typedef struct s_unit_test
{
	char *test_name;
	int  (*test_func)(void);
} t_unit_test; 

// core functions
// add tests // nodes
void	load_test(t_list **test_list, const char *test_name, int (*test_func)(void));


// execute tests
int 	launch_tests(const char *suite_name, t_list **test_list);

// helper functions
// has the status constants
char 	*get_status_string(int status_code);

// to passed as del para to ft_lstclear
// frees test_name in t_unit_test then free t_unit_test

void 	free_unit_test_content(void *content);


#endif 
