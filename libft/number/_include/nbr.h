/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:19:41 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/11 13:31:26 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NBR_H
# define NBR_H

# include <stdlib.h>

/* * * * * * * * * * * * * * conversion_4.c*/

/*Traduct the int nb len for a string len*/
int		ft_nb_len(int nb);

/*Convert a int number for a str number*/
int		ft_atoi(const char *str);

/*Convert a str number in int number*/
char	*ft_itoa(int nb);

/*Convert a str number in long nb*/
long	ft_atol(const char *str);

/* * * * * * * * helper_2.c */
int		ft_isdigit(int c);
int		ft_isspace(int c);

#endif