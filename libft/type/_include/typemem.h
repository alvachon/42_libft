/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typemem.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:40:10 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/10 17:33:12 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPEMEM_H
# define TYPEMEM_H

#define MAX 2147483647
#define MIN -2147483648

typedef enum e_bool
{
	FALSE = 0,
	TRUE = 1
}	t_bool;

/* * * * * * * * * * * * 01_isascci.c*/
/*Check if Ascii                   */
t_bool		ft_isascii(int c);
/*Check if printable            */
t_bool		ft_isprint(int c);
/* * * * * * * * * * * * * * * * * 02_asciitable.c*/
/* Check Alpha in Ascii                         */
t_bool		ft_isalpha(int c);
/* Check Digit in Ascii                     */
t_bool		ft_isdigit(int c);
/* Check if a printable blank            */
t_bool		ft_isspace(int c);
/*Check if a symbol                  */
t_bool		ft_issymbol(int c);
/* * * * * * * * * * 03_modifier.c*/
/*Change a small alpha in maj   */
int		ft_toupper(int c);
/*Change a maj alpha in small*/
int		ft_tolower(int c);
/* * * * * * * * * * * * * * * 04_isint.c*/
/*Check min && max                     */
t_bool	ft_max_size(long integer);
/*Check if the int is under 0       */
t_bool	ft_is_negative(int n);
/*Check if the int is upper 0    */
t_bool	ft_is_positive(int n);
/*Check if the int is real 0  */
t_bool	ft_is_zero(int n);

#endif