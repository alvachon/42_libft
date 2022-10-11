/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_by_mem_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:36:25 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/10 14:30:29 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../_include/memory.h"

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