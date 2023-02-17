#include "ft_math.h"

#include <float.h>
#include <limits.h>
#include <stdarg.h>
#include <stddef.h>

double	ft_vdblmax(size_t n, va_list ap)
{
	double	res;
	double	cur;

	res = DBL_MIN;
	while (n--)
	{
		cur = va_arg(ap, double);
		if (cur > res)
			res = cur;
	}
	return (res);
}

double	ft_dblmax(size_t n, ...)
{
	va_list	ap;
	double	res;

	va_start(ap, n);
	res = ft_vdblmax(n, ap);
	va_end(ap);
	return (res);
}
