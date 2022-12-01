/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:48:29 by cvidon            #+#    #+#             */
/*   Updated: 2021/12/01 09:00:00 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Extract substring from string.
 **
 ** "Allocates (with malloc(3)) and returns a substring from the string s.
 ** The substring begins at index start and is of maximum size len."
 **
 ** @param[in]  str the string that contain the cherished substring.
 ** @param[in]  start the beginning of the substring.
 ** @param[in]  size the length of the substring.
 ** @return     The cherished substring or NULL.
 */

char	*ft_substr(const char *str, unsigned int start, size_t size)
{
	size_t	len;
	char	*sub;

	len = ft_strlen (str);
	if (start >= len)
		return (ft_strdup(""));
	if (len - start < size)
		size = len - start;
	sub = malloc (sizeof (*sub) * (size + 1));
	if (!sub)
		return (NULL);
	sub[size] = 0;
	while (size--)
		sub[size] = str[start + size];
	return (sub);
}
