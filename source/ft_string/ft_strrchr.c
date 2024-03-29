/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 12:11:00 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 14:49:59 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	index;
	char	character;

	index = ft_strlen(s) + 1;
	character = (char) c;
	while (index > 0)
	{
		if (s[index - 1] == character)
			return ((char *)s + index - 1);
		index--;
	}
	return (NULL);
}
