#include "ft_hash.h"
#include <stddef.h>

size_t	ft_hash(char const *key, size_t base)
{
	size_t	hash;
	size_t	i;

	hash = 0;
	i = 0;
	while (key[i])
	{
		hash = (hash * 1069) + key[i];
		i++;
	}
	return (hash % base);
}

/* en/of mixing:
	hash = (hash ^ (hash >> 15)) * 0x2c1d;
	hash = (hash ^ (hash >> 13)) * 0x34e57;
	hash = hash ^ (hash >> 16);
*/
