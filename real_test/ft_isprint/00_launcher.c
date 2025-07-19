/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:17:32 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 19:18:36 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

int	isprint_space_test(void);
int	isprint_alphanum_test(void);
int	isprint_symbol_test(void);
int	isprint_del_test(void);
int	isprint_non_printable_test(void);
int	isprint_below_space_test(void);

int	ft_isprint_launcher(void)
{
	t_list	*test_list;
	int		result;

	test_list = NULL;

	load_test(&test_list, "Space ' '", &isprint_space_test);
	load_test(&test_list, "Alphanum 'a'", &isprint_alphanum_test);
	load_test(&test_list, "Symbol '$'", &isprint_symbol_test);
	load_test(&test_list, "DEL (127)", &isprint_del_test);
	load_test(&test_list, "Newline '\\n'", &isprint_non_printable_test);
	load_test(&test_list, "Below space (31)", &isprint_below_space_test);

	result = launch_tests("FT_ISPRINT", &test_list);

	return (result);
}