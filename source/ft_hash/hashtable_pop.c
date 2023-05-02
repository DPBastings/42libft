#include "ft_hash.h"

#include "ft_string.h"
#include <stddef.h>
#include <stdlib.h>

void	*hashtable_pop(t_hashtable *table, char const *key)
{
	void		*value;
	size_t		i;
	t_hash_slot	*prev;
	t_hash_slot	*slot;

	i = table->hashf(key, table->base_size);
	prev = NULL;
	slot = table->slots[i];
	while (slot)
	{
		if (ft_strncmp(key, slot->key, -1) == 0)
		{
			value = slot->value;
			if (prev)
				prev->next = slot->next;
			else
				table->slots[i] = slot->next;
			return (free(slot->key), free(slot), value);
		}
		prev = slot;
		slot = slot->next;
	}
	return (NULL);
}
