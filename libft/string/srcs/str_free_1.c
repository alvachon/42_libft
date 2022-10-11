/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_free_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:55:12 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/10 14:02:00 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../_include/string.h"

char	**ft_freeall(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}