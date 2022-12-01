/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:39:35 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/30 17:33:08 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Compare memory areas.
 **
 ** "The memcmp() function returns an integer less than, equal to, or greater
 ** than zero if the first n bytes of s1 is found, respectively, to be less
 ** than, to match, or be greater than the first n bytes of s2."
 **
 ** @see        MEMCMP(3) <string.h>
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (!n)
		return (0);
	if (*str1 != *str2)
		return (*str1 - *str2);
	while (*str1 == *str2 && (n - 1))
	{
		str1++;
		str2++;
		n--;
	}
	if (*str1 != *str2 && n)
		return (*str1 - *str2);
	return (0);
}
