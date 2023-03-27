/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 13:48:30 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/27 16:28:37 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	ft_putchar_fd(c, STDOUT_FILENO);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
