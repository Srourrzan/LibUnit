/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:42:21 by rsrour            #+#    #+#             */
/*   Updated: 2025/07/19 19:29:05 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"

int ft_strlen_ok_test(void);
int	ft_strlen_ko_test(void);
int		ft_strlen_segv_test(void);
int ft_strlen_segbus_test(void);

int ft_strlen_launcher(void)
{
    t_list	*test_list;
    int result;

    test_list = NULL;
    load_test(&test_list, "ft_strlen OK test", &ft_strlen_ok_test);
    load_test(&test_list, "ft_strlen KO test", &ft_strlen_ko_test);
    load_test(&test_list, "ft_strlen SEGSEGV test", &ft_strlen_segv_test);
    load_test(&test_list, "ft_strlen BUS test", &ft_strlen_segbus_test);

    result = launch_tests("ft_strlen", &test_list);
    return (result);
}
