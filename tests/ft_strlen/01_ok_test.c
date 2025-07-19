/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ok_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:45:32 by rsrour            #+#    #+#             */
/*   Updated: 2025/07/19 18:35:12 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../../framework/libunit.h"

int ft_strlen_ok_test(void)
{
	char *str;
	int expected_length;
	int result;

	str = "Hello, World!";
	expected_length = 13;
	result = ft_strlen(str);
	if (result == expected_length)
		return (0);
	else
		return (-1);
}
