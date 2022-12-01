/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:39:39 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:39:39 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Copy memory area.
 **
 ** "The memcpy() function copies n bytes from memory area src to memory area
 ** dest.  The memory areas must not overlap. Use memmove(3) if the memory areas
 ** do overlap."
 **
 ** @see        MEMCPY(3) <string.h>
 */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n--)
		((unsigned char *)dest)[n] = ((const unsigned char *)src)[n];
	return (dest);
}
