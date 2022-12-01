/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:39:41 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:39:41 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Fill memory with a constant byte.
 **
 ** "The memset() function fills the first n bytes of the memory area pointed to
 ** by s with the constant byte c."
 **
 ** @see        MEMSET(3) <string.h>
 */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	uc;
	unsigned char	*ub;

	uc = (unsigned char)c;
	ub = (unsigned char *)b;
	while (len--)
		*(ub + len) = uc;
	return (ub);
}
