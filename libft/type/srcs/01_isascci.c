/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_isascci.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:13:36 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/10 14:55:50 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../_include/typemem.h"

t_bool	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (TRUE);
	else
		return (FALSE);
}

t_bool	ft_isprint(int c)
{
	if (ft_isalpha(c)|| ft_issymbol(c) || ft_isdigit(c))
		return (TRUE);
	else
		return (FALSE);
}