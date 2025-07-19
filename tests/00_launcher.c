/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:42:21 by rsrour            #+#    #+#             */
/*   Updated: 2025/07/19 21:47:52 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../tests.h"

int     launcher(void)
{
    t_list	*test_list;
    int result;

    test_list = NULL;
    load_test(&test_list, "ft_strlen OK test", &ft_bzero_ok_test);
    // load_test(&test_list, "ft_strlen KO test", &ft_bzero_ko_test);
    // load_test(&test_list, "ft_strlen SEGSEGV test", &ft_bzero_segv_test);
    // load_test(&test_list, "ft_strlen BUS test", &ft_bzero_segbus_test);

    result = launch_tests("ft_strlen", &test_list);
    return (result);
}
