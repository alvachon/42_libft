/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_info_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:42:36 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/11 13:36:09 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../_include/string.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_wordcount(char const *s, char c)
{
	size_t	array_size;
	size_t	i;

	i = 0;
	array_size = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || \
		(s[i] == c && s[i + 1] != '\0' && s[i + 1] != c))
			array_size++;
		i++;
	}
	return (array_size);
}
