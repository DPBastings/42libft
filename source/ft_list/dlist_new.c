#include "ft_list.h"
#include <stdlib.h>

t_dlist	*dlist_new(void *data)
{
	t_dlist *const	node = malloc(sizeof(t_dlist));

	if (node == NULL)
		return (NULL);
	node->prev = NULL;
	node->data = data;
	node->next = NULL;
	return (node);
}
