/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 11:22:13 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 13:25:16 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char const	*mem;
	unsigned char		byte;

	mem = (unsigned char const *)s;
	byte = (unsigned char) c;
	while (n--)
	{
		if (*mem == byte)
			return ((char *)mem);
		mem++;
	}
	return (NULL);
}
