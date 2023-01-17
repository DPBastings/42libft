/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_gnl.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 10:17:52 by dbasting      #+#    #+#                 */
/*   Updated: 2022/11/04 12:17:40 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_GNL_H
# define LIBFT_GNL_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4096
# endif

# include <stddef.h>
# define NEWLINE_CHAR '\n'
# define MAX_FILE_DESCRIPTOR 2048

typedef struct s_buffer
{
	char	*content[BUFFER_SIZE + 1];
	int		size;
}	t_buffer;

void	*ft_realloc(void *ptr, size_t srcsize, size_t dstsize);
char	*ft_strnchain(char *s1, char const *s2, size_t n);
char	*buffmove(char *buffer, char *start, size_t len);
char	*get_next_line(int fd);

#endif
