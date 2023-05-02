/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   gnl_utils.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 10:23:01 by dbasting      #+#    #+#                 */
/*   Updated: 2023/01/30 17:25:33 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft_gnl.h"
#include "ft_string.h"
#include <stddef.h>
#include <stdlib.h>

/* void *gnl_realloc(void *ptr, size_t srcsize, size_t dstsize)
 * A stunted clone of the standard library's realloc(). Allocates
 * `dstsize` bytes of memory and copies up to `srcsize` (or 
 * `dstsize`, should that value be smaller) bytes into the newly 
 * allocated block. The memory at `ptr` is subsequently freed.
 * Returns a pointer to the reallocated memory block upon success, or
 * NULL in case of failure. Note: the memory at `ptr` will be freed
 * in either case!*/

void	*gnl_realloc(void *ptr, size_t srcsize, size_t dstsize)
{
	void	*newptr;
	size_t	index;

	newptr = malloc(dstsize);
	if (newptr == NULL)
		return (free(ptr), NULL);
	if (ptr != NULL)
	{
		index = 0;
		while (index < srcsize && index < dstsize)
		{
			((char *)newptr)[index] = ((char *)ptr)[index];
			index++;
		}
		free(ptr);
	}
	return (newptr);
}

/* int gnl_line_append(char **line, t_gnl_buffer *buffer, size_t len)
 * Reallocates the string pointed to by `line` to have room for `len` + 1
 * more chars, appends as many chars from `buffer`->data to the string and
 * NUL-terminates it.
 * Returns 0 on allocation error, returns 1 otherwise.*/

int	gnl_line_append(char **line, t_gnl_buffer *buffer, size_t len)
{
	size_t	offset;
	size_t	i;

	if (buffer->size < 1)
		return (1);
	offset = ft_strlen(*line);
	*line = gnl_realloc(*line, offset, offset + len + 1);
	if (*line == NULL)
		return (0);
	i = 0;
	while (i < len)
		(*line)[offset++] = buffer->data[i++];
	(*line)[offset] = '\0';
	return (1);
}
