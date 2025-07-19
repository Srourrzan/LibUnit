/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_bus_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:29:21 by rsrour            #+#    #+#             */
/*   Updated: 2025/07/19 18:53:44 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../framework/libunit.h"

/*
 * Thiss test is designed to trigger a seg bus error
 * by passing an invalid pointer, but Ubunut 22.04
 * does not raise a seg bus fault for this case.
*/
int ft_strlen_segbus_test(void)
{
    char    *str;

    str = (char *)0x1;
    return (ft_strlen(str));
}
