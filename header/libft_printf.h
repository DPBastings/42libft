/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_prinf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 14:01:57 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/24 16:29:36 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

# include <stdarg.h>
# include <sys/types.h>

/* Carriage struct.
 * @param print		Pointer to the printer function.
 * @param printed	The number of characters printed so far.
 * @param paper		The medium on which the characters are written (either a
 * 					file descriptor or a memory address).
 */
typedef struct s_carriage
{
	void	(*print)(struct s_carriage *, char *, size_t);
	ssize_t	printed;
	long	paper;
}	t_carriage;

typedef void	(*t_printer)(t_carriage *, t_token *, va_list ap);

/* Token struct
 * @param flags		The flags set on this token.
 * @param width		The field width.
 * @param precision	The precision.
 * @param specifier	The specifier.
 */
typedef struct s_token
{
	unsigned int	field_width;
	int				precision;
	unsigned char	flags;
	unsigned char	specifier;
}	t_token;

# define FLAGS 				"#0- +"
# define FLAG_ALTERNATIVE	1
# define FLAG_ZEROPADDING	2
# define FLAG_LEFTALIGN		4
# define FLAG_SPACE			8
# define FLAG_SIGNED		16

# define SPECIFIERS 		"diouxXcsp%"

typedef enum e_specifier
{
	SPEC_LIT,
	SPEC_DEC,
	SPEC_INT,
	SPEC_OCT,
	SPEC_UNS,
	SPEC_HEXLOW,
	SPEC_HEXUPP,
	SPEC_CHR,
	SPEC_STR,
	SPEC_PTR,
	SPEC_PERCENT,
	N_SPEC,
}	t_specifier;

/* Printer functions.
 */
void	print(t_carriage *self, char *str, size_t len);
void	sprint(t_carriage *self, char *str, size_t len);
void	asprint(t_carriage *self, char *str, size_t len);

/* Token formation functions
 */
int		has_flag(t_token *token, int flag);
t_token	*ignore_flags(t_token *token);
int		is_int_conversion(t_token *token);
t_token	*parser(char const **format);
t_token	*parse_conversion(char const **format);
t_token	*parse_literal(char const **format);
void	set_flag(t_token *token, int flag);
void	unset_flag(t_token *token, int flag);

/* Token processing functions.
 */
int		expand_token(t_carriage *carriage, t_token *token, va_list ap);
void	pad_left(t_carriage *carriage, t_token *token, size_t len);
void	pad_right(t_carriage *carriage, t_token *token, size_t len);
char	*get_prefix(t_token *token, long value);
void	printnum(t_carriage *carriage, t_token *token, char *str, char *prfx);
void	printchr(t_carriage *carriage, t_token *token, va_list ap);
void	printdec(t_carriage *carriage, t_token *token, va_list ap);
void	printhex(t_carriage *carriage, t_token *token, va_list ap);
void	printlit(t_carriage *carriage, t_token *token, va_list ap);
void	printoct(t_carriage *carriage, t_token *token, va_list ap);
void	printpercent(t_carriage *carriage, t_token *token, va_list ap);
void	printptr(t_carriage *carriage, t_token *token, va_list ap);
void	printstr(t_carriage *carriage, t_token *token, va_list ap);
void	printstrconst(t_carriage *carriage, t_token *token, char *str);
void	printuns(t_carriage *carriage, t_token *token, va_list ap);

#endif
