/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list_delete.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 12:45:29 by dbasting      #+#    #+#                 */
/*   Updated: 2023/05/01 16:06:45 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	list_delete(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
