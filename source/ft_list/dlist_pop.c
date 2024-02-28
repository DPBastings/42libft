#include "ft_list.h"
#include <stdlib.h>

void	*dlist_pop(t_dlist **lst)
{
	t_dlist *const	node = dlist_pop_node(lst);
	void			*data;

	if (!node)
		return (NULL);
	data = node->data;
	free(node);
	return (data);
}

t_dlist	*dlist_pop_node(t_dlist **lst)
{
	t_dlist	*node;

	if (!*lst)
		return (NULL);
	node = *lst;
	*lst = (*lst)->next;
	*lst->prev = NULL;
	node->next = NULL;
	return (node);
}
