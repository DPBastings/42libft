/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_uintmax.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/24 15:07:43 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/24 15:08:08 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

#include <limits.h>
#include <stdarg.h>
#include <stddef.h>

unsigned int	ft_uintmax(size_t n, ...)
{
	va_list			ap;
	unsigned int	res;

	va_start(ap, n);
	res = ft_vuintmax(n, ap);
	va_end(ap);
	return (res);
}

unsigned int	ft_vuintmax(size_t n, va_list ap)
{
	unsigned int	res;
	unsigned int	cur;

	res = 0;
	while (n--)
	{
		cur = va_arg(ap, unsigned int);
		if (cur > res)
			res = cur;
	}
	return (res);
}
