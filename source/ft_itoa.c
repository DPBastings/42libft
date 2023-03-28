/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 15:19:59 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 16:48:48 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_string.h"
#include "ft_limits.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

static bool	itoa_abs(int *n);

char	*ft_itoa(int n)
{
	size_t	i;
	char	buffer[INT_MAX_DECCHAR + 1];
	char	sign;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	if (itoa_abs(&n))
		sign = '-';
	else
		sign = '\0';
	i = 0;
	while (n)
	{
		buffer[i++] = '0' + n % 10;
		n /= 10;
	}
	buffer[i++] = sign;
	buffer[i] = '\0';
	ft_strrev(buffer);
	return (ft_strdup(buffer));
}

static bool itoa_abs(int *n)
{
	if (*n < 0)
	{
		*n *= -1;
		return (true);
	}
	return (false);
}
