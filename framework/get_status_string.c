/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_status_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:43:06 by modat             #+#    #+#             */
/*   Updated: 2025/07/18 16:43:07 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

char	*get_status_string(int status_code)
{
	switch (status_code)
	{
	case LU_OK:
		return ("OK");
	case LU_KO:
		return ("KO");
	case SIGSEGV:
		return ("SIGSEGV");
	case SIGBUS:
		return ("SIGBUS");
	case LU_TIMEOUT:
		return ("TIMEOUT");
	case SIGABRT:
		return ("SIGABRT");
	case SIGFPE:
		return ("SIGFPE");
	case SIGPIPE:
		return ("SIGPIPE");
	case SIGILL:
		return ("SIGILL");
	case LU_ERROR:
		return ("ERROR");
	default:
		return ("UNKNOWN STATUS");
	}
}
