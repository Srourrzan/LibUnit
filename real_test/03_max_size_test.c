/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_max_size_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:30:18 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 18:30:54 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../../libft/libft.h"
#include <stdlib.h> 
#include <limits.h> 

int	calloc_max_size_test(void)
{
	void	*ptr;
	size_t	count = 2;
	size_t	size = SIZE_MAX / 2 + 1;
	
    
	ptr = ft_calloc(count, size);

	if (ptr == NULL) 
		return (0); 
	free(ptr); 
	return (-1);
}