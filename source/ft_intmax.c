/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_intmax.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/24 15:09:04 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/24 15:09:15 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

#include <limits.h>
#include <stdarg.h>
#include <stddef.h>

int	ft_intmax(size_t n, ...)
{
	va_list	ap;
	int		res;

	va_start(ap, n);
	res = ft_vintmax(n, ap);
	va_end(ap);
	return (res);
}

int	ft_vintmax(size_t n, va_list ap)
{
	int	res;
	int	cur;

	res = INT_MIN;
	while (n--)
	{
		cur = va_arg(ap, int);
		if (cur > res)
			res = cur;
	}
	return (res);
}
