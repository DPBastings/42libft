/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putend.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 13:50:57 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/27 16:28:27 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include <unistd.h>

void	ft_putendl(char *s)
{
	ft_putendl_fd(s, STDOUT_FILENO);
}

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
