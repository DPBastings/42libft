/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list_size.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 12:22:52 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 11:51:50 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

size_t	list_size(t_list *lst)
{
	size_t	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
