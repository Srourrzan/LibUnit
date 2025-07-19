/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ko_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:48:29 by rsrour            #+#    #+#             */
/*   Updated: 2025/07/19 18:36:28 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../../framework/libunit.h"

int	ft_strlen_ko_test(void)
{
    char	*str;
    int		expected_length;
    int		result;

    str = "";
    expected_length = 1;
    result = ft_strlen(str);
    if (result == expected_length)
        return (0);
    return (-1);
}
