/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ok_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:45:32 by rsrour            #+#    #+#             */
/*   Updated: 2025/07/19 21:11:14 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../framework/libunit.h"

int ft_bzero_ok_test(void)
{
	
	size_t size;
	int result;;
	char *test_buffer;
	char *zero_buffer;

	size = 10;
	test_buffer = malloc(size);
	if (!test_buffer)
		return (-1);
	zero_buffer = malloc(size);
	if (!zero_buffer)
	{
		free(test_buffer);
		return (-1);
	}
	ft_memset(zero_buffer, 0, size);
	ft_memset(test_buffer, 'A', size);
	ft_bzero(test_buffer, size);
	result = memcmp(test_buffer, zero_buffer, size);
	free(test_buffer);
	free(zero_buffer);
	if (result == 0)
		return (0);
	return (-1);
}
