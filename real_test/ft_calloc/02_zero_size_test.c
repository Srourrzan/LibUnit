/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_zero_size_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:29:24 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 18:29:49 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../libft/libft.h"
#include <stdlib.h> 

int	calloc_zero_size_test(void)
{
	void	*ptr;

	ptr = ft_calloc(0, 1); 
	if (ptr == NULL) 
		return (0); 
	free(ptr); 
	ptr = ft_calloc(1, 0);
	if (ptr == NULL)
		return (0);
	free(ptr);
	return (-1);
}