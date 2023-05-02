#include "ft_hash.h"

#include "ft_string.h"
#include <stddef.h>

void	*hashtable_search(t_hashtable *table, char const *key)
{
	size_t		i;
	t_hash_slot	*slot;

	i = table->hashf(key, table->base_size);
	slot = table->slots[i];
	while (slot)
	{
		if (ft_strncmp(key, slot->key, -1) == 0)
			return (slot->value);
		slot = slot->next;
	}
	return (NULL);
}
