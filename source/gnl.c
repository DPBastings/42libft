/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   gnl.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 10:56:50 by dbasting      #+#    #+#                 */
/*   Updated: 2022/11/04 12:16:49 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_gnl.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_getline(int fd)
{
	static char	buffer[MAX_FILE_DESCRIPTOR][BUFFER_SIZE + 1];
	ssize_t		readbytes;
	char		*line;
	char		*lf_ptr;

	if (fd < 0 || fd >= MAX_FILE_DESCRIPTOR)
		return (NULL);
	buffer[fd][BUFFER_SIZE] = '\0';
	line = NULL;
	lf_ptr = ft_strchr(buffer[fd], NEWLINE_CHAR);
	while (lf_ptr == NULL)
	{
		line = ft_strnchain(line, buffer[fd], BUFFER_SIZE);
		readbytes = read(fd, buffer[fd], BUFFER_SIZE);
		if (readbytes < 1)
		{
			buffer[fd][0] = '\0';
			return (line);
		}
		buffer[fd][readbytes] = '\0';
		lf_ptr = ft_strchr(buffer[fd], NEWLINE_CHAR);
	}
	line = ft_strnchain(line, buffer[fd], lf_ptr - buffer[fd] + 1);
	buffmove(buffer[fd], lf_ptr + 1, BUFFER_SIZE + 1 - (lf_ptr - buffer[fd]));
	return (line);
}
