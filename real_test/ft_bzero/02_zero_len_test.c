/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_zero_len_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:00:17 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 19:01:57 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <string.h>

int	bzero_zero_len_test(void)
{
	char	buffer[10] = "abcdefghi";
	char	original[10];

	memcpy(original, buffer, 10);
	ft_bzero(buffer, 0);
	if (memcmp(buffer, original, 10) == 0)
		return (0);
	return (-1);
}