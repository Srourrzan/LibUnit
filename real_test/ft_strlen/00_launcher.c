/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:01:43 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 20:02:10 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

int	strlen_basic_test(void);
int	strlen_empty_string_test(void);
int	strlen_long_string_test(void);
int	strlen_null_ptr_test(void);

int	ft_strlen_launcher(void)
{
	t_list	*test_list;
	int		result;

	test_list = NULL;

	load_test(&test_list, "Basic string", &strlen_basic_test);
	load_test(&test_list, "Empty string", &strlen_empty_string_test);
	load_test(&test_list, "Long string", &strlen_long_string_test);
	load_test(&test_list, "NULL ptr (SIGSEGV)", &strlen_null_ptr_test);

	result = launch_tests("FT_STRLEN", &test_list);

	return (result);
}