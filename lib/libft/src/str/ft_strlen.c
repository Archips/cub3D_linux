/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <m4rv1n@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:40:12 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:40:12 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Find length of string.
 **
 ** "The strlen() function computes the length of the string s.  The strnlen()
 ** function attempts to compute the length of s, but never scans beyond the **
 ** first maxlen bytes of s."
 **
 ** @see        STRLEN(3) <string.h>
 */

size_t	ft_strlen(char const *str)
{
	char const	*ptr;

	ptr = str;
	while (*ptr)
		++ptr;
	return ((size_t)(ptr - str));
}
