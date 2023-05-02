/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hashtable.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/01 17:28:50 by dbasting      #+#    #+#                 */
/*   Updated: 2023/05/01 17:40:15 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"

#include "ft_stdlib.h"
#include <stddef.h>
#include <stdlib.h>

static inline void	slots_destroy(t_hash_slot **slots, void (*del)(void *));

t_hashtable	*hashtable_init(size_t base_size, t_hashf hashf)
{
	t_hashtable	*table;

	table = malloc(sizeof(t_hashtable));
	if (table == NULL)
		return (NULL);
	table->base_size = base_size;
	if (hashf)
		table->hashf = hashf;
	else
		table->hashf = ft_hash;
	table->slots = ft_calloc(base_size, sizeof(t_hash_slot *));
	if (table->slots == NULL)
		return (free(table), NULL);
	return (table);
}

void	hashtable_destroy(t_hashtable **table, void (*del)(void *))
{
	while ((*table)->base_size--)
		slots_destroy(&(*table)->slots[(*table)->base_size], del);
	free((*table)->slots);
	free(*table);
	*table = NULL;
}

static inline void	slots_destroy(t_hash_slot **slots, void (*del)(void *))
{
	t_hash_slot	*prev;

	while (*slots)
	{
		prev = *slots;
		*slots = (*slots)->next;
		if (del)
			del(prev->value);
		free(prev->key);
		free(prev);
	}
}
