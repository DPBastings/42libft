#include "ft_list.h"

int	dlist_append(t_dlist **lst, void *data)
{
	t_dlist *const	node = dlist_new(data);

	if (node == NULL)
		return (1);
	dlist_append_node(lst, node);
	return (0);
}

void	dlist_append_node(t_dlist **lst, t_dlist *node)
{
	t_dlist	*const	last = dlist_last(*lst);

	if (!lst)
		*lst = node;
	else
	{
		node->prev = last;
		last->next = node;
	}
}
