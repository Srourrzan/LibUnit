/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_invalid_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:06:47 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 20:06:59 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"

int	putstr_fd_invalid_fd_test(void)
{
	ft_putstr_fd("Should not appear anywhere.", -1);
	ft_putstr_fd("Neither should this.", 9999);
	return (0);
}