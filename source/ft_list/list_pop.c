#include "ft_list.h"
#include <stdlib.h>

void	*list_pop(t_list **lst)
{
	t_list	*node;
	void	*data;

	node = list_pop_node(lst);
	if (!node)
		return (NULL);
	data = node->content;
	free(node);
	return (data);
}

t_list	*list_pop_node(t_list **lst)
{
	t_list	*node;

	if (!*lst)
		return (NULL);
	node = *lst;
	*lst = node->next;
	node->next = NULL;
	return (node);
}
