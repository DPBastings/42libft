/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 15:27:24 by dbasting      #+#    #+#                 */
/*   Updated: 2023/09/11 11:37:01 by dbasting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include <math.h>
# include <stdarg.h>
# include <stddef.h>

int				ft_abs(int n);

double			ft_dblmax(size_t n, ...);
double			ft_dblmin(size_t n, ...);
int				ft_intmax(size_t n, ...);
int				ft_intmin(size_t n, ...);
unsigned int	ft_uintmax(size_t n, ...);
unsigned int	ft_uintmin(size_t n, ...);

double			ft_vdblmax(size_t n, va_list ap);
double			ft_vdblmin(size_t n, va_list ap);
int				ft_vintmax(size_t n, va_list ap);
int				ft_vintmin(size_t n, va_list ap);
unsigned int	ft_vuintmax(size_t n, va_list ap);
unsigned int	ft_vuintmin(size_t n, va_list ap);

#endif
