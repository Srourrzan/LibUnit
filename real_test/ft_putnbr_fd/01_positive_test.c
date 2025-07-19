/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_positive_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:10:30 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 20:10:37 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <unistd.h>

int	putnbr_fd_positive_test(void)
{
	ft_putnbr_fd(42, STDOUT_FILENO);
	return (0);
}