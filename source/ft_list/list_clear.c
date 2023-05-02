/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list_clear.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 12:51:57 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 11:53:14 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	list_clear(t_list **lst, void (*del)(void *))
{	
	t_list	*previous;

	while (*lst)
	{
		previous = *lst;
		*lst = (*lst)->next;
		list_delete(previous, del);
	}
}
