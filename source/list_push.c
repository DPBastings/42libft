/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list_push.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 12:00:45 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 11:50:19 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	list_push(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
