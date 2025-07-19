/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:59:07 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 18:59:36 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

int	bzero_basic_test(void);
int	bzero_zero_len_test(void);
int	bzero_null_ptr_test(void);

int	ft_bzero_launcher(void)
{
	t_list	*test_list;
	int		result;

	test_list = NULL;

	load_test(&test_list, "Basic zeroing", &bzero_basic_test);
	load_test(&test_list, "Zero length", &bzero_zero_len_test);
	load_test(&test_list, "NULL ptr (SIGSEGV)", &bzero_null_ptr_test);

	result = launch_tests("FT_BZERO", &test_list);

	return (result);
}