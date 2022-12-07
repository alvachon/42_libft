/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:22:10 by alvachon          #+#    #+#             */
/*   Updated: 2022/12/07 16:11:17 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../_include/str.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*str;
	int				i;

	ch = c;
	str = (unsigned char *)s;
	i = 0;
	while (n)
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
		n--;
	}
	return (NULL);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_m;
	char		*src_m;
	size_t		i;

	i = 0;
	dst_m = (char *)dst;
	src_m = (char *)src;
	if ((dst == src || len == 0))
		return (dst);
	if (dst_m > src_m)
		while (len-- > 0)
			dst_m[len] = src_m[len];
	else
	{
		while (i < len)
		{
			dst_m[i] = src_m[i];
			i++;
		}
	}
	return (dst);
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*mem;

	mem = b;
	while (len > 0)
	{
		*mem = (unsigned char)c;
		mem++;
		len--;
	}
	return (b);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	mem = malloc(count * size);
	if (mem == NULL)
		return (NULL);
	ft_memset(mem, '\0', (count * size));
	return (mem);
}

void	ft_bzero(void *s, size_t n)
{
	if (!(n == 0))
		ft_memset(s, '\0', n);
}
