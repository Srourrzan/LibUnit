/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:27:34 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 18:28:22 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <string.h>
#include <stdlib.h> 
#include <stdio.h>  


int	calloc_basic_test(void)
{
	char	*arr;
	size_t	count = 5;
	size_t	size = sizeof(int);
	char	expected[count * size]; 

	memset(expected, 0, count * size);

	arr = (char *)ft_calloc(count, size);
	if (!arr)
		return (-1); 
	if (ft_memcmp(arr, expected, count * size) == 0) 
	{
		free(arr);
		return (0); 
	}
	free(arr);
	return (-1); 
}