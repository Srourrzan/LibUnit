/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:59:53 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 19:00:06 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <string.h> 

int	bzero_basic_test(void)
{
	char	buffer[10] = "abcdefghi";
	char	expected[10] = {0};

	ft_bzero(buffer, 5);
	if (memcmp(buffer, expected, 5) == 0 && memcmp(buffer + 5, "fghi", 4) == 0)
		return (0);
	return (-1);
}