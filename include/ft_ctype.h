/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ctype.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/27 11:34:11 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/27 11:34:14 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

/* ft_isalnum -	Test whether a character is alphanumeric.
 * @param c	The character to be tested.
 * @return	0 if false, 1 if true.
 */
int	ft_isalnum(int c);

/* ft_isalpha -	Test whether a character is a letter.
 * @param c	The character to be tested.
 * @return	0 if false, 1 if true.
 */
int	ft_isalpha(int c);

/* ft_isascii -	Test whether a character is a valid ASCII value.
 * @param c	The character to be tested.
 * @return	0 if false, 1 if true.
 */
int	ft_isascii(int c);

/* ft_isdigit -	Test whether a character is a decimal digit.
 * @param c	The character to be tested.
 * @return	0 if false, 1 if true.
 */
int	ft_isdigit(int c);

/* ft_isprint -	Test whether a character is printable.
 * @param c	The character to be tested.
 * @return	0 if false, 1 if true.
 */
int	ft_isprint(int c);

/* ft_isspace -	Test whether a character is whitespace.
 * @param c	The character to be tested.
 * @return	0 if false, 1 if true.
 */
int	ft_isspace(int c);


/* ft_tolower -	Convert an uppercase letter to lowercase.
 * @param c	The character to be converted.
 * @return	The converted character.
 */
int	ft_tolower(int c);

/* ft_toupper -	Convert a lowercase letter to uppercase.
 * @param c	The character to be converted.
 * @return	The converted character.
 */
int	ft_toupper(int c);

#endif
