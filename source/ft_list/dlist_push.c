#include "ft_list.h"

int	dlist_push(t_dlist **lst, void *data)
{
	t_dlist *const	node = dlist_new(data);

	if (node == NULL)
		return (1);
	dlist_push_node(lst, node);
	return (0);
}

void	dlist_push_node(t_dlist **lst, t_dlist *node)
{
	if (lst)
	{
		(*lst)->prev = node;
		node->next = *lst;
	}
	*lst = node;
}
