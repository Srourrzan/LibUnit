/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:12:17 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 19:12:48 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

int	isascii_ascii_char_test(void);
int	isascii_null_char_test(void);
int	isascii_del_char_test(void);
int	isascii_non_ascii_char_test(void);
int	isascii_negative_char_test(void);

int	ft_isascii_launcher(void)
{
	t_list	*test_list;
	int		result;

	test_list = NULL;

	load_test(&test_list, "ASCII char 'A'", &isascii_ascii_char_test);
	load_test(&test_list, "Null character", &isascii_null_char_test);
	load_test(&test_list, "DEL character (127)", &isascii_del_char_test);
	load_test(&test_list, "Non-ASCII (128)", &isascii_non_ascii_char_test);
	load_test(&test_list, "Negative char (-1)", &isascii_negative_char_test);

	result = launch_tests("FT_ISASCII", &test_list);

	return (result);
}