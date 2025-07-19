/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_int_min_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:12:11 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 20:12:17 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <unistd.h>
#include <limits.h>

int	putnbr_fd_int_min_test(void)
{
	ft_putnbr_fd(INT_MIN, STDOUT_FILENO);
	return (0);
}