/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list_push.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 12:00:45 by dbasting      #+#    #+#                 */
/*   Updated: 2023/08/22 09:35:33 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	list_push(t_list **lst, void *data)
{
	t_list *const	node = list_new(data);

	if (node == NULL)
		return (1);
	list_push_node(lst, node);
	return (0);
}

void	list_push_node(t_list **lst, t_list *new)
{
	t_list *const	tail = list_last(new);

	tail->next = *lst;
	*lst = new;
}
