/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:24:23 by modat             #+#    #+#             */
/*   Updated: 2025/07/19 18:25:02 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H


# include <unistd.h>     
# include <sys/wait.h>   
# include <stdlib.h>   
# include <signal.h> 
# include "../libft/libft.h"


# define LU_OK		0
# define LU_KO		1
# define LU_SIGSEGV 2
# define LU_SIGBUS 	3
# define LU_TIMEOUT	4   
# define LU_ABPT 	5   
# define LU_FPE 	6  
# define LU_PIPE 	7  
# define LU_ILL	 	8   
# define LU_ERROR 	9  


typedef struct s_unit_test
{
	char *test_name;
	int  (*test_func)(void);
} t_unit_test; 


void	load_test(t_list **test_list, const char *test_name, int (*test_func)(void));
int 	launch_tests(const char *suite_name, t_list **test_list);
char 	*get_status_string(int status_code);
void 	free_unit_test_content(void *content);


#endif 
