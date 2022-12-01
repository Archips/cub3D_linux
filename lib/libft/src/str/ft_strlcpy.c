/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:40:11 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:40:11 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Size-bounded string copying and concatenation.
 **
 ** "strlcpy() copies up to dstsize - 1 characters from the string src to dst,
 ** NUL-terminating the result if dstsize is not 0.
 **
 ** strlcpy() take the full size of the destination buffer and guarantee
 ** NUL-termination if there is room.  Note that room for the NUL should be
 ** included in dstsize."
 **
 ** @see        STRCPY(3) <string.h>
 */

size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize)
{
	size_t	i;

	if (!dstsize)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
