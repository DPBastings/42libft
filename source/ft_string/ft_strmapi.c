/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 16:35:41 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 14:49:31 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	size_t	len;
	size_t	index;

	len = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	string = malloc((len + 1) * sizeof(char));
	if (string)
	{
		index = 0;
		while (index < len)
		{
			string[index] = f((unsigned int) index, s[index]);
			index++;
		}
		string[index] = '\0';
	}
	return (string);
}
