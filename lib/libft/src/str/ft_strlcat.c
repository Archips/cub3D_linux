/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:40:10 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 16:09:01 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Find length of string, capped at n.
 **
 ** @param[in]  s a string.
 ** @param[in]  n a value to cap len.
 ** @return     s len or n if len >= n.
 */

static size_t	ft_strnlen(char const *s, size_t n)
{
	size_t	len;

	len = 0;
	while (s[len] && len <= n)
		len++;
	return (len);
}

/*
 ** @brief      Size-bounded string copying and concatenation.
 **
 ** "strlcat() appends string src to the end of dst.  It will append at most
 ** dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
 ** dstsize is 0 or the original dst string was longer than dstsize (in practice
 ** this should not happen as it means that either dstsize is incorrect or that
 ** dst is not a proper string)."
 **
 ** @see        STRLCAT(3) <string.h>
 */

size_t	ft_strlcat(char *dst, char const *src, size_t dstsize)
{
	size_t	s_len;
	size_t	d_len;
	size_t	offset;

	s_len = ft_strlen(src);
	d_len = ft_strnlen(dst, dstsize);
	offset = d_len;
	if (dstsize < d_len)
		return (s_len + dstsize);
	if (dstsize > d_len)
		while (*src && offset < dstsize - 1)
			dst[offset++] = *src++;
	dst[offset] = '\0';
	return (s_len + d_len);
}
