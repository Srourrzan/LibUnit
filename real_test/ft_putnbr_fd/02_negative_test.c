/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_negative_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:10:52 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 20:11:05 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <unistd.h>

int	putnbr_fd_negative_test(void)
{
	ft_putnbr_fd(-123, STDOUT_FILENO);
	return (0);
}