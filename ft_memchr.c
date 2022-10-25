/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 11:22:13 by dbasting      #+#    #+#                 */
/*   Updated: 2022/10/24 12:32:25 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*mem;
	size_t				index;

	mem = (const unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (mem[index] == (unsigned char) c)
			return ((char *)mem + index);
		index++;
	}
	return (NULL);
}
