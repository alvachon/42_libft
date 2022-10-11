/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:08:02 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/10 18:09:42 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITE_H
# define WRITE_H

#include <unistd.h>

/* * * * * * * * * * * * * * 00_write.c*/
/*                                    */
size_t	ft_strlen(const char *s);
/*                                 */
void	ft_putchar(char c);
/*                              */
void	ft_putstr(char *str);
/*                           */
void	ft_putnbr(int nb);
/* * * * * * * * * * * * * * * * * * * * * * * 01_fd.c*/
/*                                                  */
void	ft_putchar_fd(char c, int fd);
/*                                              */
void	ft_putstr_fd(char *s, int fd);
/*                                          */
void	ft_putnbr_fd(int n, int fd);
/*Put a str in fd with a newline         */
void	ft_putendl_fd(char *s, int fd);

#endif