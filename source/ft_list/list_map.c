/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list_map.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 13:00:17 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 11:53:51 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*list_map(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapping;
	t_list	*newnode;
	void	*newcontent;

	if (!f || !del)
		return (NULL);
	mapping = NULL;
	while (lst)
	{
		newcontent = f(lst->content);
		if (newcontent == NULL)
			return (list_clear(&mapping, del), NULL);
		newnode = list_new(newcontent);
		if (newnode == NULL)
		{
			del(newcontent);
			return (list_clear(&mapping, del), NULL);
		}
		list_append(&mapping, newnode);
		lst = lst->next;
	}
	return (mapping);
}
