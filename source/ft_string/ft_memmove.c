/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 12:09:50 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 13:30:05 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	size_t		index;
	char		*d;
	char const	*s;

	d = (char *)dst;
	s = (char const *)src;
	if (d > s)
	{
		index = len;
		while (index--)
			d[index] = s[index];
	}
	else if (d < s)
	{
		index = 0;
		while (index < len)
		{
			d[index] = s[index];
			index++;
		}
	}
	return (dst);
}
