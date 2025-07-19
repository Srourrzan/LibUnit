/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:26:11 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 18:27:11 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../framework/libunit.h"
#include "../../libft/libft.h" 
#include <stddef.h>               

int	calloc_basic_test(void);
int	calloc_zero_size_test(void);
int	calloc_max_size_test(void);
int	calloc_null_ptr_return_test(void);

int	ft_calloc_launcher(void)
{
	t_list	*test_list;
	int		result;

	test_list = NULL;

	load_test(&test_list, "Basic allocation", &calloc_basic_test);
	load_test(&test_list, "Zero size allocation", &calloc_zero_size_test);
	load_test(&test_list, "Max size no overflow (SIGSEGV)", &calloc_max_size_test); 
	load_test(&test_list, "Null return on impossible alloc", &calloc_null_ptr_return_test);

	result = launch_tests("FT_CALLOC", &test_list);

	return (result);
}