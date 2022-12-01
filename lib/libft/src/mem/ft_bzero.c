/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:39:05 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:39:05 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Zero a byte string.
 **
 ** "The bzero() function erases the data in the n bytes of the memory starting
 ** at the location pointed to by s, by writing zeros ('\0') to that area."
 **
 ** @see        BZERO(3) <strings.h>
 */

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*uc;

	uc = (unsigned char *)s;
	while (n--)
	{
		*(uc + n) = 0;
	}
}
