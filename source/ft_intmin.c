#include "ft_math.h"

#include <limits.h>
#include <stdarg.h>
#include <stddef.h>

int	ft_vintmin(size_t n, va_list ap)
{
	int	res;
	int	cur;

	res = INT_MAX;
	while (n--)
	{
		cur = va_arg(ap, int);
		if (cur < res)
			res = cur;
	}
	return (res);
}

int	ft_intmin(size_t n, ...)
{
	va_list	ap;
	int		res;

	va_start(ap, n);
	res = ft_vintmin(n, ap);
	va_end(ap);
	return (res);
}
