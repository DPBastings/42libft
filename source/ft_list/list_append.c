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

void	list_append(t_list **lst, t_list *new)
{
	t_list	*end;

	if (*lst)
	{
		end = list_last(*lst);
		end->next = new;
	}
	else
		*lst = new;
}
