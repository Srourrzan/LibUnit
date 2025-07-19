/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:37:06 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 19:38:56 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

int	tolower_uppercase_test(void);
int	tolower_lowercase_test(void);
int	tolower_digit_test(void);
int	tolower_symbol_test(void);
int	tolower_beyond_ascii_test(void);

int	ft_tolower_launcher(void)
{
	t_list	*test_list;
	int		result;

	test_list = NULL;

	load_test(&test_list, "Uppercase 'A'", &tolower_uppercase_test);
	load_test(&test_list, "Lowercase 'a'", &tolower_lowercase_test);
	load_test(&test_list, "Digit '5'", &tolower_digit_test);
	load_test(&test_list, "Symbol '$'", &tolower_symbol_test);
	load_test(&test_list, "Beyond ASCII (150)", &tolower_beyond_ascii_test);

	result = launch_tests("FT_TOLOWER", &test_list);

	return (result);
}