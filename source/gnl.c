/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   gnl.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 10:56:50 by dbasting      #+#    #+#                 */
/*   Updated: 2023/01/30 17:17:49 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft_gnl.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_getline(int fd)
{
	static t_gnl_buffer	*buffers[MAX_FILE_DESCRIPTOR];
	char				*line;
	size_t				len_fragment;

	if (fd < 0 || fd >= MAX_FILE_DESCRIPTOR || !gnl_buffer_init(buffers, fd))
		return (NULL);
	line = NULL;
	while (!gnl_buffer_scan(buffers[fd], &len_fragment))
	{
		if (!gnl_line_append(&line, buffers[fd], len_fragment))
			return (gnl_buffer_destroy(&(buffers[fd])), NULL);
		buffers[fd]->size = read(fd, buffers[fd]->data, GNL_BUFFER_SIZE);
		if (buffers[fd]->size == 0)
			return (gnl_buffer_destroy(&(buffers[fd])), line);
		if (buffers[fd]->size == -1)
			return (gnl_buffer_destroy(&(buffers[fd])), free(line), NULL);
	}
	if (!gnl_line_append(&line, buffers[fd], len_fragment))
		return (gnl_buffer_destroy(&(buffers[fd])), NULL);
	gnl_buffer_move(buffers[fd], len_fragment);
	return (line);
}

// In the future, I might implement a ft_getline-like equivalent of getdelim()
// as well.
