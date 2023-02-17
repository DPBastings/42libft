#include "ft_math.h"

#include <float.h>
#include <limits.h>
#include <stdarg.h>
#include <stddef.h>

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

double	ft_dblmin(size_t n, ...)
{
	va_list	ap;
	double	res;

	va_start(ap, n);
	res = ft_vdblmin(n, ap);
	va_end(ap);
	return (res);
}
