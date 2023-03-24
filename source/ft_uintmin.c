/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_uintmin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/24 15:08:22 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/24 15:08:33 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

#include <limits.h>
#include <stdarg.h>
#include <stddef.h>

unsigned int	ft_uintmin(size_t n, ...)
{
	va_list			ap;
	unsigned int	res;

	va_start(ap, n);
	res = ft_vuintmin(n, ap);
	va_end(ap);
	return (res);
}

unsigned int	ft_vuintmin(size_t n, va_list ap)
{
	unsigned int	res;
	unsigned int	cur;

	res = UINT_MAX;
	while (n--)
	{
		cur = va_arg(ap, unsigned int);
		if (cur < res)
			res = cur;
	}
	return (res);
}
