/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 14:32:59 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 14:50:23 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

static int	ft_charcmp(char const *s, int c);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*string;
	size_t	lmargin;
	size_t	rmargin;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	lmargin = 0;
	rmargin = ft_strlen(s1);
	while (rmargin > 0)
	{
		if (!ft_charcmp(set, s1[rmargin - 1]))
			break ;
		rmargin--;
	}
	while (lmargin < rmargin)
	{
		if (!ft_charcmp(set, s1[lmargin]))
			break ;
		lmargin++;
	}
	string = malloc((rmargin - lmargin + 1) * sizeof(char));
	if (string)
		ft_strlcpy(string, s1 + lmargin, rmargin - lmargin + 1);
	return (string);
}

static int	ft_charcmp(char const *s, int c)
{
	while (*s)
	{
		if (c == *s)
			return (1);
		s++;
	}
	return (0);
}
