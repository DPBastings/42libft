/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/28 16:49:36 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 16:54:07 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stddef.h>

char	*ft_strrev(char *s)
{
	size_t	f;
	size_t	b;
	char	tmp;

	f = 0;
	b = ft_strlen(s);
	while (f < --b)
	{
		tmp = s[b];
		s[b] = s[f];
		s[f] = tmp;
		f++;
	}
	return (s);
}
