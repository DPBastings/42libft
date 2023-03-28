/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_stdlib.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/27 16:31:11 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 16:47:38 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stddef.h>

int		ft_atoi(char const *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_itoa(int n);

#endif
