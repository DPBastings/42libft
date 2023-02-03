/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   gnl_utils_buffer.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 10:56:50 by dbasting      #+#    #+#                 */
/*   Updated: 2023/01/30 17:17:49 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft_gnl.h"
#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/* int gnl_buffer_init(t_gnl_buffer **buffers, int fd)
 * Initializes a new buffer (which can be accessed from `buffers`. Does
 * nothing if a buffer has already been allocated for this `fd` (i.e. if
 * the pointer at `buffers`[`fd`] is not NULL).
 * Returns 1 on success; returns 0 on failure.*/

int	gnl_buffer_init(t_gnl_buffer **buffers, int fd)
{
	if (buffers[fd] != NULL)
		return (1);
	buffers[fd] = ft_calloc(1, sizeof(t_gnl_buffer));
	if (buffers[fd] == NULL)
		return (0);
	return (1);
}

/* void gnl_buffer_destroy(t_gnl_buffer **buffer)
 * Frees the memory pointed to by `buffer` and sets the pointer to NULL.*/

void	gnl_buffer_destroy(t_gnl_buffer **buffer)
{
	free(*buffer);
	*buffer = NULL;
}

/* void gnl_buffer_move(t_gnl_buffer *buffer, size_t start)
 * Copies all data from `buffer`->data[`start`] onward to the left side 
 * of the buffer. The `size` member of `buffer` is set accordingly (i.e.
 * it will be equal to BUFFER_SIZE - start.*/

void	gnl_buffer_move(t_gnl_buffer *buffer, size_t start)
{
	size_t	new_size;

	new_size = 0;
	while (start < (size_t) buffer->size)
		buffer->data[new_size++] = buffer->data[start++];
	buffer->size = new_size;
}

/* int gnl_buffer_scan(t_gnl_buffer *buffer, size_t *i)
 * Scans the data in `buffer` for GNL_DELIMITER. The number of chars scanned
 * before a return condition is reached is stored in the size_t 
 * pointed to by `i`.
 * Returns (1) if a GNL_DELIMITER is encountered before reaching the end
 * of the buffer; returns (0) otherwise.*/

int	gnl_buffer_scan(t_gnl_buffer *buffer, size_t *len)
{
	*len = 0;
	while (*len < (size_t) buffer->size)
	{
		if (buffer->data[(*len)++] == GNL_DELIMITER)
			return (1);
	}
	return (0);
}
