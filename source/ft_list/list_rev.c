/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list_rev.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <dbasting@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 09:35:50 by dbasting      #+#    #+#                 */
/*   Updated: 2023/08/22 09:36:28 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	list_rev(t_list **lst)
{
	t_list	*rev;

	rev = NULL;
	while (*lst)
		list_push_node(&rev, list_pop_node(lst));
	*lst = rev;
}
