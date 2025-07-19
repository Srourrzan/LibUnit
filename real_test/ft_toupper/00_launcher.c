/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:50:40 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 19:54:07 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

int	toupper_lowercase_test(void);
int	toupper_uppercase_test(void);
int	toupper_digit_test(void);
int	toupper_symbol_test(void);
int	toupper_beyond_ascii_test(void);

int	ft_toupper_launcher(void)
{
	t_list	*test_list;
	int		result;

	test_list = NULL;

	load_test(&test_list, "Lowercase 'a'", &toupper_lowercase_test);
	load_test(&test_list, "Uppercase 'A'", &toupper_uppercase_test);
	load_test(&test_list, "Digit '5'", &toupper_digit_test);
	load_test(&test_list, "Symbol '$'", &toupper_symbol_test);
	load_test(&test_list, "Beyond ASCII (150)", &toupper_beyond_ascii_test);

	result = launch_tests("FT_TOUPPER", &test_list);

	return (result);
}