/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:48:32 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 18:48:55 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <unistd.h> 

int	putendl_fd_basic_test(void)
{
	ft_putendl_fd("Hello, world!", STDOUT_FILENO);
	return (0);
}