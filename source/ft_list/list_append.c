/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list_append.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 12:26:28 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 11:52:27 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	list_append(t_list **lst, void *data)
{
	t_list *const	node = list_new(data);

	if (node == NULL)
		return (1);
	list_append(lst, node);
	return (0);
}

void	list_append_node(t_list **lst, t_list *node)
{
	t_list	*end;

	if (*lst)
	{
		end = list_last(*lst);
		end->next = node;
	}
	else
		*lst = node;
}
