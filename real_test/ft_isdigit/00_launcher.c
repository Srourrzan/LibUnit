/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:55:20 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 18:56:48 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

int	isdigit_digit_test(void);
int	isdigit_alpha_test(void);
int	isdigit_symbol_test(void);
int	isdigit_null_char_test(void);

int	ft_isdigit_launcher(void)
{
	t_list	*test_list;
	int		result;

	test_list = NULL;

	load_test(&test_list, "Digit '5'", &isdigit_digit_test);
	load_test(&test_list, "Alpha 'a'", &isdigit_alpha_test);
	load_test(&test_list, "Symbol '$'", &isdigit_symbol_test);
	load_test(&test_list, "Null character", &isdigit_null_char_test);

	result = launch_tests("FT_ISDIGIT", &test_list);

	return (result);
}