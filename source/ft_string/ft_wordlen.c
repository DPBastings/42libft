#include "ft_string.h"
#include "ft_ctype.h"

size_t	ft_wordlen(char const *str)
{
	size_t	result;

	result = 0;
	while (str[result] && !ft_isspace(str[result]))
		++result;
	return (result);
}
