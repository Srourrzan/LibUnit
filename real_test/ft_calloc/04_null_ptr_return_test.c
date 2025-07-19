/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_null_ptr_return_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:31:11 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 18:31:39 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../../libft/libft.h"
#include <stdlib.h> 

int	calloc_null_ptr_return_test(void)
{
	void	*ptr;

	
	ptr = ft_calloc(1, (size_t)-1); 
	if (ptr == NULL)
		return (0); 
	free(ptr);
	return (-1);
}