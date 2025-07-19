/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:09:34 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 20:10:07 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../../libft/libft.h"

int	putnbr_fd_positive_test(void);
int	putnbr_fd_negative_test(void);
int	putnbr_fd_zero_test(void);
int	putnbr_fd_int_max_test(void);
int	putnbr_fd_int_min_test(void);
int	putnbr_fd_invalid_fd_test(void);

int	ft_putnbr_fd_launcher(void)
{
	t_list	*test_list;
	int		result;

	test_list = NULL;

	load_test(&test_list, "Positive number (42)", &putnbr_fd_positive_test);
	load_test(&test_list, "Negative number (-123)", &putnbr_fd_negative_test);
	load_test(&test_list, "Zero (0)", &putnbr_fd_zero_test);
	load_test(&test_list, "INT_MAX", &putnbr_fd_int_max_test);
	load_test(&test_list, "INT_MIN", &putnbr_fd_int_min_test);
	load_test(&test_list, "Invalid FD (no crash)", &putnbr_fd_invalid_fd_test);

	result = launch_tests("FT_PUTNBR_FD", &test_list);

	return (result);
}