/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list_delete.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 12:45:29 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 11:45:48 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	list_delete(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
