/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_unit_test_content.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:43:02 by modat             #+#    #+#             */
/*   Updated: 2025/07/18 16:43:03 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	free_unit_test_content(void *content)
{
	t_unit_test *unit_test;
	
	unit_test = (t_unit_test *)content;  // cast the void pointer
	
	if (unit_test)
	{
		if (unit_test->test_name)
		{
			free(unit_test->test_name);
			unit_test->test_name = NULL;
		}
		free(unit_test);
		unit_test = NULL;
	}
}


void 	free_test_list(t_list **test_list)
{
	if (test_list)
	{
		ft_lstclear(test_list, &free_unit_test_content);
	}
}
