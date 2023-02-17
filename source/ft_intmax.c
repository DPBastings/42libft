#include "ft_math.h"

#include <limits.h>
#include <stdarg.h>
#include <stddef.h>

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

int	ft_intmax(size_t n, ...)
{
	va_list	ap;
	int		res;

	va_start(ap, n);
	res = ft_vintmax(n, ap);
	va_end(ap);
	return (res);
}
