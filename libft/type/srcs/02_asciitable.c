/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_asciitable.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:45:14 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/11 13:42:26 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../_include/typemem.h"

t_bool	ft_isalpha(int c)
{
	if (c >= 0 && c <= 127)
	{
		if (c >= 'A' && c <= 'Z')
			return (TRUE);
		else if (c >= 'a' && c <= 'z')
			return (TRUE);
		else
			return (FALSE);
	}
	else
		return (FALSE);
}

t_bool	ft_isdigit(int c)
{
	if (c >= 0 && c <= 127)
	{
		if (c >= '0' && c <= '9')
			return (TRUE);
		else
			return (FALSE);
	}
	else
		return (FALSE);
}

t_bool	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r')
		return (TRUE);
	return (FALSE);
}

t_bool	ft_issymbol(int c)
{
	if ((c >= 040 && c <= 047) || (c >= 050 && c <= 057) || c == 0100
		|| (c >= 072 && c <= 077) || (c >= 0133 && c <= 0140)
		|| (c >= 0173 && c <= 0176))
		return (TRUE);
	else
		return (FALSE);
}
