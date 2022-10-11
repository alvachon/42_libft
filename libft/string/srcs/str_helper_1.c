/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_helper_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:14:26 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/10 15:15:02 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../_include/string.h"

static void	*ft_memset(void *b, int c, size_t len)
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