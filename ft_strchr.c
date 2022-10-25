/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 17:38:13 by dbasting      #+#    #+#                 */
/*   Updated: 2022/10/24 16:50:39 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{	
	size_t	index;
	char	character;

	index = 0;
	character = (char) c;
	while (s[index])
	{
		if (s[index] == character)
			return ((char *)s + index);
		index++;
	}
	if (character == '\0')
		return ((char *)s + index);
	return (NULL);
}
