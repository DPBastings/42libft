/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 11:03:38 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 13:26:56 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stddef.h>

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		((char *)dst)[index] = ((char const *)src)[index];
		index++;
	}
	return (dst);
}
