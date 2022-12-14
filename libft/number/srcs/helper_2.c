/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:01:39 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/11 13:30:45 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../_include/nbr.h"

int	ft_isdigit(int c)
{
	if (c >= 0 && c <= 127)
	{
		if (c >= '0' && c <= '9')
			return (1);
		else
			return (0);
	}
	else
		return (0);
}

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}
