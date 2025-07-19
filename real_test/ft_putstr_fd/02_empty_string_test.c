/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_empty_string_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:06:05 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 20:06:12 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <unistd.h>

int	putstr_fd_empty_string_test(void)
{
	ft_putstr_fd("", STDOUT_FILENO);
	return (0);
}