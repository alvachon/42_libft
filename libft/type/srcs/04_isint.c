/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:12:37 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/10 14:56:13 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../_include/typemem.h"

t_bool	ft_is_negative(int n)
{
	if (n < 0)
		return (TRUE);
	else
		return (FALSE);
}

t_bool	ft_is_positive(int n)
{
	if (n > 0)
		return (TRUE);
	else
		return (FALSE);
}

t_bool	ft_is_zero(int n)
{
	if (n == 0)
		return (TRUE);
	else
		return (FALSE);
}

t_bool	ft_max_size(long integer)
{
	if ((integer < MIN || integer > MAX))
		return (FALSE);
	return (TRUE);
}