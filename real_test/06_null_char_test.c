/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_char_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:00:34 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 20:00:41 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <unistd.h>

int	putchar_fd_null_char_test(void)
{
	ft_putchar_fd('\0', STDOUT_FILENO);
	return (0);
}