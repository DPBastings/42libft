/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_string.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/27 16:31:22 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 16:54:09 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stddef.h>

/* ft_bzero -	Set byte string to \0 bytes.
 * @param s	The byte string to write to..
 * @param n	The number of bytes.
 */
void	ft_bzero(void *s, size_t n);

/* ft_memchr -	Find a value in a byte string.
 * @param s	The byte string to search in.
 * @param c	The value to search for.
 * @param n	The number of bytes.
 * @return	A pointer to the first instance of c, or NULL if there is none.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/* ft_memcmp -	Compare byte strings.
 * @param s1	Byte string 1.
 * @param s2	Byte string 2.
 * @param n	The number of bytes in either string.
 * @return	0 if the byte strings are equal, or the difference between the
 * 		first unequal values encountered.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/* ft_memcpy -	Copy byte strings.
 * @param dst	The byte string to write to.
 * @param src	The byte string to write from.
 * @param n	The number of bytes.
 * @return	dst
 * @notes	If s1 and s2 overlap, the behavior is undefined.
 */
void	*ft_memcpy(void *dst, void const *src, size_t n);

/* ft_memmove -	Copy byte strings.
 * @param dst	The byte string to write to.
 * @param src	The byte string to write from.
 * @param n	The number of bytes.
 * @return	dst
 */
void	*ft_memmove(void *dst, void const *src, size_t len);

/* ft_memset -	Set byte string to single value.
 * @param b	The byte string to write to.
 * @param c	The value to write.
 * @param len	The number of bytes.
 * @return	b
 */
void	*ft_memset(void *b, int c, size_t len);

/* ft_split -	Split a string with a delimiter.
 * @param s	The string to split.
 * @param c	The delimiter character.
 * @return	An array of strings, or NULL on failure. Any delimiters are
 * 		removed. The array and the strings themselves should be passed
 * 		to free() when no longer in use.
 */
char	**ft_split(char const *s, char c);

/* ft_strdup -	Duplicate a string.
 * @param s1	The string to duplicate.
 * @return	A duplicate of the string, or NULL on failure. The duplicate
 * 		string is dynamically allocated and should be passed to free()
 * 		when no longer in use.
 */
char	*ft_strdup(char const *s1);

/* ft_strlcat -	Concatenate strings.
 * @param dst	The string to concatenate onto.
 * @param src	The string to be concatenated.
 * @param dstsize	The size of the destination buffer.
 * @return	The length of the string that should have been created.
 * @notes	The dst buffer should be able to hold the total length of the
 * 		new string, plus the terminating NUL. If the function's 
 * 		return value is lesser than dstsize, the string has been
 * 		truncated.
 */
size_t	ft_strlcat(char *dst, char const *src, size_t dstsize);

/* ft_strchr -	Find character in string.
 * @param s	The string to search in.
 * @param c	The character to search for.
 * @return	A pointer to the first occurrence of c, or NULL if there is none.
 */
char	*ft_strchr(char const *s, int c);

/* ft_striteri -	Iterate over a string and alter characters based on 
 * 			their position.
 * @param s	The string to iterate over.
 * @param f	The function to apply to the string.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/* ft_strjoin -	Join two strings.
 * @param s1	String 1.
 * @param s2	String 2.
 * @return	A pointer to the concatenated strings. This new string is
 * 		dynamically allocated; the pointer should be passed to
 * 		free() when no longer in use.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/* ft_strmapi -	Map a string, based on character index.
 * @param s	The string to be mapped.
 * @param f	The mapping function.
 * @return	A pointer to the mapping, or NULL in case of allocation 
 * 		error. This pointer should be passed to free() when no
 * 		longer in use.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/* ft_strncmp -	Compare strings.
 * @param s1	String 1.
 * @param s2	String 2.
 * @param n	The number of characters that should at most be compared.
 * @return	0 if the strings are equal, or the difference between the
 * 		first two differing characters.
 */
int		ft_strncmp(char const *s1, char const *s2, size_t n);

/* ft_strnstr -	Find a substring in a string.
 * @param haystack	The string to search in.
 * @param needle	The string to search fo.
 * @param len		The number of characters that should at most be searched.
 * @return		A pointer to the first occurence of needle, or NULL if
 * 			haystack doesn't contain needle.
 */
char	*ft_strnstr(char const *haystack, char const *needle, size_t len);

/* ft_strlcpy -	Overwrite a string with another one.
 * @param dst	The string to write to.
 * @param src	The string to copy.
 * @param dstsize	The size of the dst buffer.
 * @return	dst
 */
size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize);

/* ft_strlen -	Calculate string length.
 * @param s	The string to measure.
 * @return	The number of bytes in s, excluding the terminating NUL.
 */
size_t	ft_strlen(char const *s);

/* ft_strrev -	Reverse a string.
 * @param s	The string to reverse.
 * @return	s
 */
char	*ft_strrev(char *s);

/* ft_strrchr -	Find character in string.
 * @param s	The string to search in.
 * @param c	The character to search for.
 * @return	A pointer to the last occurrence of c, or NULL if there is none.
 */
char	*ft_strrchr(char const *s, int c);

/* ft_strtrim -	Remove leading and trailing characters from string.
 * @param s1	The string to trim.
 * @param set	A collection of characters which are to be removed.
 * @return	A copy of s1, with leading and trailing characters in set removed.
 * 		This copy is dynamically allocated and its pointer should
 * 		therefore be passed to (free) when no longer in use.
 */
char	*ft_strtrim(char const *s1, char const *set);

/* ft_substr -	Create a substring from a string.
 * @param s	The string to copy from.
 * @param start	The index at which the substring should start.
 * @param len	The length of the substring.
 * @return	The substring. This buffer is dynamically allocated and should
 * 		therefore be passed to free() when no longer in use.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
