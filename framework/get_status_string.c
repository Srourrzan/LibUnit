/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_status_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsrour <rsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:43:06 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 13:43:32 by rsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

char	*get_status_string(int status_code)
{
	if (status_code == LU_OK)
		return ("OK");
	else if (status_code == LU_KO)
		return ("KO");
	else if (status_code == SIGSEGV)
		return ("SIGSEGV");
	else if (status_code == SIGBUS)
		return ("SIGBUS");
	else if (status_code == LU_TIMEOUT)
		return ("TIMEOUT");
	else if (status_code == SIGABRT)
		return ("SIGABRT");
	else if (status_code == SIGFPE)
		return ("SIGFPE");
	else if (status_code == SIGPIPE)
		return ("SIGPIPE");
	else if (status_code == SIGILL)
		return ("SIGILL");
	else if (status_code == LU_ERROR)
		return ("ERROR");
	else
		return ("UNKNOWN STATUS");
}
