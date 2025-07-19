/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:59:32 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 19:59:52 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

int	putchar_fd_basic_test(void);
int	putchar_fd_null_char_test(void);
int	putchar_fd_invalid_fd_test(void);

int	ft_putchar_fd_launcher(void)
{
	t_list	*test_list;
	int		result;

	testest_listtlist = NULL;

	load_test(&test_list, "Basic char to stdout", &putchar_fd_basic_test);
	load_test(&test_list, "Null char to stdout", &putchar_fd_null_char_test);
	load_test(&test_list, "Invalid FD (no crash)", &putchar_fd_invalid_fd_test);

	result = launch_tests("FT_PUTCHAR_FD", &test_list);

	return (result);
}