/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_segv_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:49:07 by rsrour            #+#    #+#             */
/*   Updated: 2025/07/19 18:38:29 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../framework/libunit.h"

int		ft_strlen_segv_test(void)
{
    char	*str;

    str = NULL;
    return(ft_strlen(str));
}
