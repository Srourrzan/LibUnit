/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:45:34 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 18:46:28 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../framework/libunit.h"
#include "../../libft/libft.h" 

int	putendl_fd_basic_test(void);
int	putendl_fd_empty_string_test(void);
int	putendl_fd_null_string_test(void); 
int	putendl_fd_invalid_fd_test(void); 
int	ft_putendl_fd_launcher(void)
{
	t_list	*test_list;
	int		result;

	test_list = NULL;

	load_test(&test_list, "Basic string to stdout", &putendl_fd_basic_test);
	load_test(&test_list, "Empty string to stdout", &putendl_fd_empty_string_test);
	load_test(&test_list, "NULL string (SIGSEGV)", &putendl_fd_null_string_test);
	load_test(&test_list, "Invalid FD (no crash)", &putendl_fd_invalid_fd_test);

	result = launch_tests("FT_PUTENDL_FD", &test_list);

	return (result);
}