/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:22:14 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 19:23:16 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

int	isalnum_alpha_test(void);
int	isalnum_digit_test(void);
int	isalnum_symbol_test(void);
int	isalnum_space_test(void);
int	isalnum_null_char_test(void);

int	ft_isalnum_launcher(void)
{
	t_list	*test_list;
	int		result;

	test_list = NULL;

	load_test(&test_list, "Alpha 'A'", &isalnum_alpha_test);
	load_test(&test_list, "Digit '5'", &isalnum_digit_test);
	load_test(&test_list, "Symbol '#'", &isalnum_symbol_test);
	load_test(&test_list, "Space ' '", &isalnum_space_test);
	load_test(&test_list, "Null character", &isalnum_null_char_test);

	result = launch_tests("FT_ISALNUM", &test_list);

	return (result);
}