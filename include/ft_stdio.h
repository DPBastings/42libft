/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_stdio.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 13:23:18 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/24 16:14:31 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include <stdarg.h>

char	*ft_getline(int fd);

int		ft_printf(char const *format, ...);
int		ft_dprintf(char const *format, ...);
int		ft_sprintf(char const *format, ...);
int		ft_vprintf(char const *format, va_list ap);
int		ft_vdprintf(char const *format, va_list ap);
int		ft_vsprintf(char const *format, va_list ap);

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char *s);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl(char *s);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);

#endif
