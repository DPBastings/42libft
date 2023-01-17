/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   gnl_utils.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 10:23:01 by dbasting      #+#    #+#                 */
/*   Updated: 2022/11/04 11:56:00 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_gnl.h"
#include <stddef.h>
#include <stdlib.h>

/* ft_realloc - the stunted bastard child of the original realloc(3)
 * Allocates a block of memory of dstsize, which contains up to srcsize bytes
 * of data from ptr (or less, should dstsize be smaller than srcsize). The
 * memory at ptr is returned to the heap (freed) after execution. If ptr is a
 * null pointer, ft_realloc behaves identically to malloc(3).
 * */

void	*ft_realloc(void *ptr, size_t srcsize, size_t dstsize)
{
	void	*newptr;
	size_t	index;

	newptr = malloc(dstsize);
	if (newptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		index = 0;
		while (index < srcsize)
		{
			((char *)newptr)[index] = ((char *)ptr)[index];
			index++;
		}
		free(ptr);
	}
	return (newptr);
}

/* ft_strnchain - join strings and more
 * The ft_strnchain() function combines and enhances two standard library 
 * functions:
 * 	> strjoin: extend a dynamically allocated string s1; up to n characters
 * 	from s2 are copied.
 * 	> strdup: if s1 is a null pointer, ft_strnchain behaves as strdup with
 * 	respect to s2. The function may also be used to allocate a substring of
 * 	s2, by providing an appropriate value for n.
 * */

char	*ft_strnchain(char *s1, const char *s2, size_t n)
{
	char	*string;
	size_t	offset;

	if (ft_strlen(s2) == 0)
		return (NULL);
	offset = ft_strlen(s1);
	string = ft_realloc(s1, offset, (offset + n + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	while (s2 && *s2 && n--)
		string[offset++] = *s2++;
	string[offset] = '\0';
	return (string);
}

/* buffmove - prepare a buffer for rereading
 * The buffmove() function partially resets a memory buffer by moving up to len
 * bytes of data from start to the buffer's head.
 * Note that function is tailored to be a helper function for get_next_line()
 * and should likely not be used for any other purpose without proper modification.
 * */

char	*buffmove(char *buffer, char *start, size_t len)
{
	size_t	index;

	index = 0;
	while (index < len)
		buffer[index++] = *start++;
	while (index < BUFFER_SIZE)
		buffer[index++] = '\0';
	return (buffer);
}
