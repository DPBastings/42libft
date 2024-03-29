/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 15:57:21 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 14:49:52 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hindex;
	size_t	nindex;

	if (*needle == '\0')
		return ((char *)haystack);
	hindex = 0;
	nindex = 0;
	while (haystack[hindex] && hindex < len)
	{
		while (needle[nindex] && hindex + nindex < len)
		{
			if (needle[nindex] != haystack[hindex + nindex])
			{
				nindex = 0;
				break ;
			}
			nindex++;
		}
		if (needle[nindex] == '\0')
			return ((char *)haystack + hindex);
		hindex++;
	}
	return (NULL);
}
