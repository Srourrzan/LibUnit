/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:05:55 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 19:08:00 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <string.h> 

int	memcpy_basic_test(void)
{
	char	dest[10];
	char	src[] = "copythis";
	char	expected[10];

	memset(dest, 'A', 10);
	memcpy(expected, "copythisAA", 10);

	ft_memcpy(dest, src, 8); 
	if (memcmp(dest, expected, 10) == 0)
		return (0);
	return (-1);
}