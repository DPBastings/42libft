/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 13:00:17 by dbasting      #+#    #+#                 */
/*   Updated: 2022/10/21 13:43:27 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapping;
	t_list	*newnode;

	if (!f || !del)
		return (NULL);
	mapping = NULL;
	while (lst)
	{
		newnode = ft_lstnew(f(lst->content));
		if (!newnode)
		{
			ft_lstclear(&mapping, del);
			break ;
		}
		ft_lstadd_back(&mapping, newnode);
		lst = lst->next;
	}
	return (mapping);
}
