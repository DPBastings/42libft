/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 11:50:44 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 13:26:33 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	size_t				index;
	unsigned char const	*b1;
	unsigned char const	*b2;

	index = 0;
	b1 = (unsigned char const *)s1;
	b2 = (unsigned char const *)s2;
	while (index < n)
	{
		if (b1[index] != b2[index])
			break ;
		index++;
	}
	if (index < n)
		return (b1[index] - b2[index]);
	return (0);
}
