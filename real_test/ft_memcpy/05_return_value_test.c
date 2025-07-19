/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_return_value_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:06:42 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 19:06:48 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"

int	memcpy_return_value_test(void)
{
	char	dest[10];
	char	src[] = "abc";
	void	*ret;

	ret = ft_memcpy(dest, src, 3);
	if (ret == dest)
		return (0);
	return (-1);
}