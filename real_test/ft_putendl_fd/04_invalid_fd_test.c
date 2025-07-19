/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_invalid_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:47:25 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 18:47:45 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"

int	putendl_fd_invalid_fd_test(void)
{
	ft_putendl_fd("This should go nowhere.", -1);
	ft_putendl_fd("This should go nowhere.", 9999);
	return (0);
}