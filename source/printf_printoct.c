/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printoct.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/13 16:20:33 by dbasting      #+#    #+#                 */
/*   Updated: 2023/01/16 15:34:48 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"
#include "ft_string.h"

#include <stdarg.h>

void	printoct(t_carriage *carriage, t_token *token, va_list ap)
{
	unsigned int	number;
	char			*prefix;
	char			*string;

	number = va_arg(ap, unsigned int);
	string = printf_itostr(number, token, OCT_DIGITS);
	if (has_flag(token, FLAG_ALTERNATIVE)
		&& token->precision <= (int) ft_strlen(string))
		prefix = ft_strdup("0");
	else
		prefix = ft_strdup("");
	printnum(carriage, token, string, prefix);
}
