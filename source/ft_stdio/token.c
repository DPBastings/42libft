/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   token.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/28 10:43:09 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/24 16:17:40 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "token.h"

int	has_flag(t_token *token, int flag)
{
	return (token->flags & flag);
}

void	set_flag(t_token *token, int flag)
{
	token->flags |= flag;
}

void	unset_flag(t_token *token, int flag)
{
	token->flags &= ~flag;
}

int	is_int_conversion(t_token *token)
{
	return (token->specifier == SPEC_DEC
		|| token->specifier == SPEC_INT
		|| token->specifier == SPEC_UNS
		|| token->specifier == SPEC_HEXLOW
		|| token->specifier == SPEC_HEXUPP);
}

int	expand_token(t_carriage *carriage, t_token *token, va_list ap)
{
	t_printer const	lut_printer[N_SPEC] = {
		printlit, printdec, printdec, printoct,
		printuns, printhex, printhex, printchr,
		printstr, printptr, printpercent};
	if (token == NULL)
		return (0);
	g_printdict[token->specifier](carriage, token, ap);
	return (1);
}
