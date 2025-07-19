/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:05:41 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 20:05:51 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <unistd.h>

int	putstr_fd_basic_test(void)
{
	ft_putstr_fd("This is a test string.", STDOUT_FILENO);
	return (0);
}