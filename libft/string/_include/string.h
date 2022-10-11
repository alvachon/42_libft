/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:22:20 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/10 15:15:15 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include <stdlib.h>

//linked to memory lib. (str_create_4.c)

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * str_alloc_3.c */

/* Alloc memory for a copy of the string s1, does the copy,  
   and returns a pointer to it.                                            */
char	*ft_strdup(const char *str);

/* Alloc memory for a copy of the string s1 with a len limit,
   does the copy, and returns a pointer to it.                         */
char	*ft_strndup(const char *str, size_t len);

/* Copies up to dstsize -1 characters from the string src to dst.
 - NUL-terminating the result if dstsize is not 0.
 1. Return the total length of the string src.
 2. If the return value is >= dstsize, the string has been trunk.
 * It is the caller's responsibility to handle this. 
 * Behavior Undefined if Overlap.                               */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/* Copy/Paste with ptrs. Don't deal overlap
  (behavior undefined) Does not check NULL char. 
  Return original value of dst. DOES NOT ALLOC             */
void	*ft_memcpy(void *dst, const void *src, size_t len);

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * str_compare_2.c */

/* Compare s1 and s2 no more than N character. After '\0' = Not compared.
  Return an int >, =, or < than 0
 The comparison is done using unsigned char, so that `\200' > than `\0' */
int	ft_strncmp(const char *s1, const char *s2, size_t n);

/*Compare 2 strings and return the len of the suite similar characters*/
int	ft_strcmp(char *s1, char *s2);

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * str_create_4.c*/

/* Create new by join two strings together with malloc. NULL if echec.*/
char	*ft_strjoin(char const *s1, char const *s2);

/* Create by alloc a part of a chain of character from str         */
char	*ft_substr(const char *s1, unsigned int start, size_t len);

/* Create a chain of character with malloc the same as s1,
 but without element of set.                                  */
char	*ft_strtrim(char const *s1, char const *set);

/*Create multiple strs, the separation is determined by 
 the char determined.                                    */
char	**ft_split(char const *s, char c);

/* * * * * * * * * * * * * * * * * * * * * * * * * * str_free_1.c */

/* Free all elements given allocated in the heap. Stop at null */
char	**ft_freeall(char **str);

/* * * * * * * * * * * * * * * * * * * * * * * * * * str_info_2.c */

/* Return the len of each character in the str                  */
size_t	ft_strlen(const char *s);

/* Return the nbr of words determined by the separation of c */
size_t	ft_wordcount(char const *s, char c);

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * str_locate_3.c */

/* Locates the first str needle (and null-terminate it) in the string hays,
 - Not more than len characters are searched.
 - Characters that appear after a `\0' character are not searched.
 1. If needle is an empty string, haystack is returned.
 2. If needle occurs nowhere in haystack, NULL is returned.
 3. Otherwise a pointer to the first character of the first occurrence
   of needle is returned.                                               */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/* Locates the last occurrence of c.                                 */
char	*ft_strrchr(const char *s, int c);

/* Locates the first occurrence of c (converted to a char) in the
 string pointed to by s.
 The terminating null character is considered to be part of the 
 string; therefore if c is `\0', the functions locate the `\0'.*/
char	*ft_strchr(const char *s, int c);

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * str_modifier_4.c */

/* Iteration. Applies function 'f' on each char of the string in arg
 to create a new chain of char (with malloc)
 with all the result of function f.                  */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/* All the char that are min are put in maj */
char	*ft_strupcase(char *str);

/* Take the full size of dstsize and guarantee NUL-termination if room.
 * Note that room for the NUL should be included in dstsize.
 * strlcat() appends string src to the end of dst.
 * It will append at most dstsize - strlen(dst) - 1 characters.
 * It will then NUL-terminate, unless dstsize is 0 or original dst str
 * was longer than dstsize (this should not happen as it means that
 * either dstsize is incorrect or that dst is not a proper string).
 * If the src and dst strings overlap, the behavior is undefined   */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/* Iteration. Applies the function f on each char element of the string 
 of char as arg. Each char is given the adress directly 
 by 'f' ton transform if necessary                           */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/* * * * helper_1.c*/
/**/
void	*ft_calloc(size_t count, size_t size);

#endif