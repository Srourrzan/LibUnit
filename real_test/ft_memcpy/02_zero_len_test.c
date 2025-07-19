/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_zero_len_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:07:28 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 19:07:44 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <string.h> 
int	memcpy_zero_len_test(void)
{
	char	dest[10] = "abcdefghij";
	char	src[] = "UVWXYZ";
	char	original_dest[10];

	memcpy(original_dest, dest, 10);
	ft_memcpy(dest, src, 0); 
	if (memcmp(dest, original_dest, 10) == 0)
		return (0);
	return (-1);
}