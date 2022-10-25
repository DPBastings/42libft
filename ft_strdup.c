/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 12:51:20 by dbasting      #+#    #+#                 */
/*   Updated: 2022/10/24 11:22:24 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*string;

	size = ft_strlen(s1) + 1;
	string = malloc(sizeof(char) * size);
	if (string)
	{
		while (size--)
			string[size] = s1[size];
	}
	return (string);
}
