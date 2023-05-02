/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dblmin.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/24 15:09:43 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/24 15:09:45 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

#include <float.h>
#include <limits.h>
#include <stdarg.h>
#include <stddef.h>

double	ft_dblmin(size_t n, ...)
{
	va_list	ap;
	double	res;

	va_start(ap, n);
	res = ft_vdblmin(n, ap);
	va_end(ap);
	return (res);
}

double	ft_vdblmin(size_t n, va_list ap)
{
	double	res;
	double	cur;

	res = DBL_MAX;
	while (n--)
	{
		cur = va_arg(ap, double);
		if (cur < res)
			res = cur;
	}
	return (res);
}
