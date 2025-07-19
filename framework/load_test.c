/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:43:12 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 13:34:52 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	load_test(t_list **test_list, const char *test_name,
		int (*test_func)(void))
{
	t_unit_test	*new_unit_test;
	t_list		*new_node;

	new_unit_test = (t_unit_test *)ft_calloc(1, sizeof(t_unit_test));
	if (!new_unit_test)
	{
		ft_putendl_fd("Error: Memory allocation failed for unit test.", 2);
		exit(EXIT_FAILURE);
	}
	new_unit_test->test_name = ft_strdup(test_name);
	if (!new_unit_test->test_name)
	{
		ft_putendl_fd("Error: Memory allocation failed for test name.", 2);
		free(new_unit_test);
		exit(EXIT_FAILURE);
	}
	new_unit_test->test_func = test_func;
	new_node = ft_lstnew(new_unit_test);
	if (!new_node)
	{
		ft_putendl_fd("Error: Memory allocation failed for list node.", 2);
		free(new_unit_test->test_name);//, new_unit_test);
		exit(EXIT_FAILURE);
	}
	ft_lstadd_back(test_list, new_node);
}
