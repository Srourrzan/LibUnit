/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:42:45 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 21:58:29 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static int	analyze_exit_status(int status)
{
	int	code;

	if (WIFEXITED(status))
	{
		code = WEXITSTATUS(status);
		ft_putstr_fd(get_status_string(code), 1);
		ft_putendl_fd("]", 1);
		return (code);
	}
	if (WIFSIGNALED(status))
	{
		code = WTERMSIG(status);
		ft_putstr_fd(get_status_string(code), 1);
		ft_putendl_fd("]", 1);
		return (code);
	}
	ft_putstr_fd(get_status_string(LU_ERROR), 1);
	ft_putendl_fd("]", 1);
	return (LU_ERROR);
}

static int	run_single_test(char *suite, t_unit_test *test)
{
	pid_t	pid;
	int		status;

	ft_putstr_fd(suite, 1);
	ft_putstr_fd(": ", 1);
	ft_putstr_fd(test->test_name, 1);
	ft_putstr_fd(" : [", 1);
	pid = fork();
	if (pid == -1)
	{
		ft_putendl_fd("ERROR] Fork failed", 1);
		return (LU_ERROR);
	}
	else if (pid == 0)
		_exit(test->test_func() == 0 ? LU_OK : LU_KO);
	waitpid(pid, &status, 0);
	return (analyze_exit_status(status));
}


static void	print_summary(int passed, int total)
{
	ft_putnbr_fd(passed, 1);
	ft_putstr_fd("/", 1);
	ft_putnbr_fd(total, 1);
	ft_putendl_fd(" tests checked", 1);
}

static void	clear_tests(t_list **test_list)
{
	ft_lstclear(test_list, free_unit_test_content);
}

int	launch_tests(char *suite_name, t_list **test_list)
{
	t_list		*node;
	t_unit_test	*test_data;
	int			total;
	int			passed;
	int			result;
	int			status;

	node = *test_list;
	total = 0;
	passed = 0;
	result = 0;
	while (node)
	{
		test_data = node->content;
		total++;
		status = run_single_test(suite_name, test_data);
		if (status == LU_OK)
			passed++;
		if (status != LU_OK)
			result = -1;
		node = node->next;
	}
	print_summary(passed, total);
	clear_tests(test_list);
	return (result);
}

