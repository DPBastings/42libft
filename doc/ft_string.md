# libft Documentation
## ft_string

### ft_bzero
```c
void	ft_bzero(void*s, size_t n);
```
Set byte string to `\0` bytes.
#### Parameters
* `s`	The byte string to write to.
* `n`	The number of bytes.

### ft_memchr
```c
void	*ft_memchr(const void*s, int c, size_t n);
```
Find a value in a byte string.
#### Parameters
* `s`	The byte string to search in.
* `c`	The value to search for.
* `n`	The number of bytes.
#### Return value
* A pointer to the first instance of `c`.
* If `c` is not found, `NULL` is returned.

### ft_memcmp
```c
int	ft_memcmp(const void*s1, const void*s2, size_t n);
```
Compare byte strings.
#### Parameters
* `s1`	Byte string 1.
* `s2`	Byte string 2.
* `n`	The number of bytes in either string.
#### Return value
* Zero (0), if the byte strings are equal.
* If the byte strings are not equal: the difference between the first differing characters.

### ft_memcpy
```c
void	*ft_memcpy(void*dst, void const*src, size_t n);
```
Copy byte strings.
#### Parameters
* `dst`	The byte string to write to.
* `src`	The byte string to write from.
* `n`	The number of bytes.
#### Return value
* `dst`
#### Notes
* If s1 and s2 overlap, the behavior is undefined.

### ft_memmove
```c
void	*ft_memmove(void*dst, void const*src, size_t len);
```
Copy byte strings.
#### Parameters
* `dst`	The byte string to write to.
* `src`	The byte string to write from.
* `n`	The number of bytes.
#### Return value
* `dst`

### ft_memset
```c
void	*ft_memset(void*b, int c, size_t len);
```
Set byte string to single value.
#### Parameters
* `b`	The byte string to write to.
* `c`	The value to write.
* `len`	The number of bytes.
#### Return value
* `b`

### ft_split
```c
char	**ft_split(char const*s, char c);
```
Split a string with a delimiter.
#### Parameters
* `s`	The string to split.
* `c`	The delimiter character.
#### Return value
* An array of strings, or NULL on failure. Any delimiters are removed. The array and the strings themselves should be passed to `free()` when no longer in use.

### ft_strdup
```c
char	*ft_strdup(char const*s1);
```
Duplicate a string.
#### Parameters
* `s1`	The string to duplicate.
#### Return value
* A duplicate of the string, or NULL on failure. The duplicate string is dynamically allocated and should be passed to `free()` when no longer in use.

### ft_strlcat
```c
size_t	ft_strlcat(char*dst, char const*src, size_t dstsize);
```
Concatenate strings.
#### Parameters
* `dst`	The string to concatenate onto.
* `src`	The string to be concatenated.
* `dstsize`	The size of the destination buffer.
#### Return value
* The length of the string that should have been created.
#### Notes
* The `dst` buffer should be able to hold the total length of the new string, plus the terminating `'\0'`. If the function's return value is lesser than `dstsize`, the string has been truncated.

### ft_strchr
```c
char	*ft_strchr(char const*s, int c);
```
Find character in string.
#### Parameters
* `s`	The string to search in.
* `c`	The character to search for.
#### Return value
* A pointer to the first occurrence of `c`, or `NULL` if there is none.

### ft_striteri
```c
void	ft_striteri(char*s, void (*f)(unsigned int, char*));
```
Iterate over a string and alter characters based on their position.
#### Parameters
* `s`	The string to iterate over.
* `f`	The function to apply to the string.

### ft_strjoin
```c
char	*ft_strjoin(char const*s1, char const*s2);
```
Join two strings.
#### Parameters
* `s1`	String 1.
* `s2`	String 2.
#### Return value
* A pointer to the concatenated strings. This new string is dynamically allocated; the pointer should be passed to `free()` when no longer in use.

### ft_strmapi
```c
char	*ft_strmapi(char const*s, char (*f)(unsigned int, char));
```
Map a string, based on character index.
#### Parameters
* `s`	The string to be mapped.
* `f`	The mapping function.
#### Return value
* A pointer to the mapping. This pointer should be passed to `free()` when no longer in use.
* `NULL` in case of allocation error.

### ft_strncmp
```c
int	ft_strncmp(char const*s1, char const*s2, size_t n);
```
Compare strings.
#### Parameters
* `s1`	String 1.
* `s2`	String 2.
* `n`	The number of characters that should at most be compared.
#### Return value
* `0` if the strings are equal, or the difference between the first two differing characters.

### ft_strnstr
```c
char	*ft_strnstr(char const*haystack, char const*needle, size_t len);
```
Find a substring in a string.
#### Parameters
* `haystack`	The string to search in.
* `needle`	The string to search fo.
* `len`		The number of characters that should at most be searched.
#### Return value
* A pointer to the first occurence of `needle`, or `NULL` if `haystack` doesn't contain `needle`.

### ft_strlcpy
```c
size_t	ft_strlcpy(char*dst, char const*src, size_t dstsize);
```
Overwrite a string with another one.
#### Parameters
* `dst`	The string to write to.
* `src`	The string to copy.
* `dstsize`	The size of the `dst` buffer.
#### Return value
* `dst`


### ft_strlen
```c
size_t	ft_strlen(char const*s);
```
Calculate string length.
#### Parameters
* `s`	The string to measure.
#### Return value
* The number of bytes in `s`, excluding the terminating `'\0'`.

### ft_strrev
```c
char	*ft_strrev(char*s);
```
Reverse a string.
#### Parameters
* `s`	The string to reverse.
#### Return value
* `s`

### ft_strrchr
```c
char	*ft_strrchr(char const*s, int c);
```
Find character in string.
#### Parameters
* `s`	The string to search in.
* `c`	The character to search for.
#### Return value
* 	A pointer to the last occurrence of `c`, or `NULL` if there is none.

### ft_strtrim
```c
char	*ft_strtrim(char const*s1, char const*set);
```
Remove leading and trailing characters from string.
#### Parameters
* `s1`	The string to trim.
* `set`	A collection of characters which are to be removed.
#### Return value
* 	A copy of `s1`, with leading and trailing characters in `set` removed. This copy is dynamically allocated and its pointer should therefore be passed to `free()` when no longer in use.

### ft_substr
```c
char	*ft_substr(char const*s, unsigned int start, size_t len);
```
Create a substring from a string.
#### Parameters
* `s`	The string to copy from.
* `start`	The index at which the substring should start.
* `len`	The length of the substring.
#### Return value
* 	The substring. This buffer is dynamically allocated and should	therefore be passed to `free()` when no longer in use.

### ft_wordlen
```c
size_t	ft_wordlen(char const*s);
```
Calculate word length.
#### Parameters
* `s`	The string containing the word to measure.
#### Return value
The length of the first word in the string. If `s` begins with a non-whitespace
 character, zero is returned.
#### Notes
A word is regarded to be delimited by either whitespace (which is tested by `ft_ctype`'s `isspace()` or the boundary of the string.