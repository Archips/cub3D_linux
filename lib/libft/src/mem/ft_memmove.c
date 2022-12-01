/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:39:40 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:39:40 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Copy memory area.
 **
 ** "The memmove() function copies n bytes from memory area src to memory area
 ** dest.  The memory areas may overlap: copying takes place as though the bytes
 ** in src are first copied into a temporary array that does not overlap src or
 ** dest, and the bytes are then copied from the temporary array to dest."
 **
 ** @brief      MEMMOVE(3) <string.h>
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == NULL && src == NULL)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s)
		while (n--)
			d[n] = s[n];
	else if (d < s)
		while (n--)
			*d++ = *s++;
	return (dest);
}
