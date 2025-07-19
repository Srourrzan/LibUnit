/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_null_string_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:47:49 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 18:48:10 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <unistd.h> 

int	putendl_fd_null_string_test(void)
{
	ft_putendl_fd(NULL, STDOUT_FILENO);
	return (0);
}