/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:02:20 by rsrour            #+#    #+#             */
/*   Updated: 2025/07/19 21:12:12 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

#include "../libft/libft.h"

int ft_strlen_ok_test(void);
int	ft_strlen_ko_test(void);
int	ft_strlen_segv_test(void);
int ft_strlen_segbus_test(void);

int ft_bzero_ok_test(void);

#endif // TESTS_H