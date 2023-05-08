/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashtable_update.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/08 12:27:33 by dbasting      #+#    #+#                 */
/*   Updated: 2023/05/08 12:27:42 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"

#include "ft_string.h"
#include <stddef.h>
#include <stdlib.h>

static inline void	slot_insert(t_hashtable *table, t_hash_slot *slot);

int	hashtable_update(t_hashtable *table, char const *key, void *value,
						void **old_value)
{
	t_hash_slot	*slot;

	slot = malloc(sizeof(t_hash_slot));
	if (slot == NULL)
		return (HASH_FAILURE);
	slot->key = ft_strdup(key);
	if (slot->key == NULL)
		return (free(slot), HASH_FAILURE);
	slot->value = value;
	slot->next = NULL;
	*old_value = hashtable_pop(table, key);
	slot_insert(table, slot);
	return (HASH_SUCCESS);
}

static inline void	slot_insert(t_hashtable *table, t_hash_slot *slot)
{
	size_t		i;
	t_hash_slot	*existing_slot;

	i = table->hashf(slot->key, table->base_size);
	existing_slot = table->slots[i];
	if (existing_slot == NULL)
	{
		table->slots[i] = slot;
		return ;
	}
	while (existing_slot->next)
		existing_slot = existing_slot->next;
	existing_slot->next = slot;
}
