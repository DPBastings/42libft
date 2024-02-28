/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dlist_rev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <dbasting@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 09:36:40 by dbasting      #+#    #+#                 */
/*   Updated: 2023/08/22 09:40:36 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	dlist_rev(t_dlist **lst)
{
	t_dlist	*rev;

	rev = NULL;
	while (*lst)
		dlist_push(rev, dlist_pop_node(lst));
	*lst = rev;
}
