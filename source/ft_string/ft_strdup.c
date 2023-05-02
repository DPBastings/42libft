/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 12:51:20 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 14:47:25 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

char	*ft_strdup(char const *s1)
{
	size_t	size;
	char	*string;

	size = ft_strlen(s1) + 1;
	string = malloc(sizeof(char) * size);
	if (string == NULL)
		return (NULL);
	while (size--)
		string[size] = s1[size];
	return (string);
}
