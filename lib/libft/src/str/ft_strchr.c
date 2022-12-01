/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:40:01 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:40:01 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Locate a character in string.
 **
 ** "The strchr() function locates the first occurrence of c (converted to a
 ** char) in the string pointed to by s.  The terminating null character is
 ** considered to be part of the string; therefore if c is ‘\0’, the functions
 ** locate the terminating ‘\0’."
 **
 ** @see        STRCHR(3) <string.h>
 */

char	*ft_strchr(char const *s, int c)
{
	while (*s && *s != (unsigned char)c)
		++s;
	if (*s == (unsigned char)c)
		return ((char *)(unsigned long)s);
	else
		return (0);
}
