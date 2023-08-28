/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_gnl.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 10:17:52 by dbasting      #+#    #+#                 */
/*   Updated: 2023/08/28 13:56:54 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_GNL_H
# define LIBFT_GNL_H

# ifndef GNL_BUFFER_SIZE
#  define GNL_BUFFER_SIZE		4096
# endif

# include <stddef.h>
# include <sys/types.h>

# define GNL_DELIMITER			0xA
# define MAX_FILE_DESCRIPTOR	256

typedef struct s_gnl_buffer {
	ssize_t	size;
	char	data[GNL_BUFFER_SIZE];
}	t_gnl_buffer;

int		gnl_buffer_init(t_gnl_buffer **buffers, int fd);
void	gnl_buffer_destroy(t_gnl_buffer **buffer);
void	gnl_buffer_move(t_gnl_buffer *buffer, size_t start);
int		gnl_buffer_scan(t_gnl_buffer *buffer, size_t *i);
int		gnl_line_append(char **line, t_gnl_buffer *buffer, size_t end);
void	*gnl_realloc(void *ptr, size_t srcsize, size_t dstsize);

#endif
