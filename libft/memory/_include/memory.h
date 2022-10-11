/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:58:30 by alvachon          #+#    #+#             */
/*   Updated: 2022/10/10 14:36:41 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

#include <stdlib.h>
#include <stdint.h>

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * heap_alloc_3.c */

/* Fill block of memory (first arg) with a determined unsigned char item */
void	*ft_memset(void *b, int c, size_t len);

/* Alloc MEM into the Heap and set it to zero. Return a pointer     */
void	*ft_calloc(size_t count, size_t size);

/*Erase Block of MEM the size of Buffer. 
  Ex: &adrr, sizeof(struct addr)
  If n is zero, bzero() does nothing.                        */
void	ft_bzero(void *s, size_t n);

/* * * * * * * * * * * * * * * * * * * * * * * * * * action_by_mem_2.c*/

/* Copy/Paste *str of a block of MEMbyte to an other MEM in the dst.
 Deal Overlap. Return dst from MEM start w/modifications.
 Does NOT check NULL char in orignal function.                  */
void	*ft_memmove(void *dest, const void *src, size_t len);

/* The memchr() function locates the first occurrence of c 
(converted to an unsigned char) in string s.
The memchr() function returns a pointer to the byte located,
 or NULL if no such byte exists within n bytes.Strchr seems
 to be better                                           */
void	*ft_memchr(const void *s, int c, size_t n);


#endif