/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf_utils.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 11:46:13 by dbasting      #+#    #+#                 */
/*   Updated: 2023/01/16 15:31:04 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"
#include "ft_ctype.h"
#include "ft_stdlib.h"
#include "ft_string.h"

static size_t	printf_itoa(unsigned long number, char *array,
					char const *digits);

int	printf_atoi(char const **str)
{
	int	n;

	n = 0;
	while (ft_isspace(**str))
		(*str)++;
	while (ft_isdigit(**str))
	{
		n = n * 10 + (**str - '0');
		(*str)++;
	}
	return (n);
}

char	*printf_itostr(unsigned long number, t_token *token, char const *digits)
{
	char	*string;
	char	buffer[32];
	size_t	len;
	size_t	leading;

	if (!(number == 0 && token->precision == 0))
		len = printf_itoa(number, buffer, digits);
	else
		len = 0;
	if (token->precision != -1 && (size_t) token->precision > len)
		leading = token->precision - len;
	else
		leading = 0;
	string = ft_calloc((leading + len + 1), sizeof(char));
	if (string == NULL)
		return (NULL);
	ft_memset(string, '0', leading);
	ft_strlcat(string, buffer, leading + len + 1);
	return (string);
}

static size_t	printf_itoa(unsigned long number, char *array,
					char const *digits)
{
	size_t	radix;
	size_t	index;

	radix = ft_strlen(digits);
	index = 0;
	if (number == 0)
		array[index++] = digits[0];
	while (number)
	{
		array[index++] = digits[number % radix];
		number /= radix;
	}
	array[index] = '\0';
	ft_strrev(array);
	return (index);
}
