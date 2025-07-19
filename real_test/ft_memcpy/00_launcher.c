/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:05:00 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 19:05:25 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

int	memcpy_basic_test(void);
int	memcpy_zero_len_test(void);
int	memcpy_null_dest_test(void);
int	memcpy_null_src_test(void);
int	memcpy_return_value_test(void);

int	ft_memcpy_launcher(void)
{
	t_list	*test_list;
	int		result;

	test_list = NULL;

	load_test(&test_list, "Basic copy", &memcpy_basic_test);
	load_test(&test_list, "Zero length", &memcpy_zero_len_test);
	load_test(&test_list, "NULL dest (SIGSEGV)", &memcpy_null_dest_test);
	load_test(&test_list, "NULL src (SIGSEGV)", &memcpy_null_src_test);
	load_test(&test_list, "Return value", &memcpy_return_value_test);

	result = launch_tests("FT_MEMCPY", &test_list);

	return (result);
}