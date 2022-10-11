/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_compare_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:51:39 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/10 15:10:11 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../_include/string.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	i = 0;
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (ps1[i] == ps2[i] && ps1[i] != '\0' && ps2[i] != '\0'
		&& i < (n - 1))
		i++;
	return (ps1[i] - ps2[i]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

