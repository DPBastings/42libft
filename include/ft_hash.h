/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hash.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/01 17:16:52 by dbasting      #+#    #+#                 */
/*   Updated: 2023/05/01 17:40:18 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HASH_H
# define FT_HASH_H

# include <stddef.h>

# define HASH_SUCCESS	0
# define HASH_FAILURE	1

typedef size_t	(*t_hashf)(char const *, size_t);

typedef struct s_hash_slot {
	char				*key;
	void				*value;
	struct s_hash_slot	*next;
}	t_hash_slot;

typedef struct s_hashtable {
	size_t		base_size;
	t_hashf		hashf;
	t_hash_slot	**slots;
}	t_hashtable;

t_hashtable	*hashtable_init(size_t base_size, t_hashf hashf);
int			hashtable_update(t_hashtable *table, char const *key, void *value,
				void **old_value);
void		*hashtable_search(t_hashtable *table, char const *key);
void		*hashtable_pop(t_hashtable *table, char const *key);
void		hashtable_destroy(t_hashtable **hashtable, void (*del)(void *));

size_t		ft_hash(char const *key, size_t base);

#endif
