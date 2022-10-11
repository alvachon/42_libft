/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap_alloc_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:22:10 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/11 13:28:15 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../_include/memory.h"

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
