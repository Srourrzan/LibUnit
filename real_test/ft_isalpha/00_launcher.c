/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:09:24 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 18:09:25 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"


// test cases prototype 
int     isalpha_uppercase_test(void);
int     isalpha_lowercase_test(void);
int     isalpha_digit_test(void);
int     isalpha_symbol_test(void);
int     isalpha_NULL_char_test(void);


int     ft_isalpha_launcher(void)
{
    t_list	*test_list;
	int		result;

	test_list = NULL; 

	load_test(&test_list, "Uppercase 'A'", &islpha_uppercase_test);
	load_test(&test_list, "Lowercase 'z'", &isalpha_lowercase_test);
	load_test(&test_list, "Digit '5'", &isalpha_digit_test);
	load_test(&test_list, "Symbol '#'", &isalpha_symbol_test);
	load_test(&test_list, "Null character", &isalpha_null_char_test);

	// Launch all tests for the "FT_ALPHA" suite
	result = launch_tests("FT_ISALPHA", &test_list); 

    //  overall result of the suit
	return (result); 
}