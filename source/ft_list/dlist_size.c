#include "ft_list.h"
#include <stddef.h>

size_t	dlist_size(t_dlist *lst)
{
	size_t	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
