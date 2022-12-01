/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:40:07 by cvidon            #+#    #+#             */
/*   Updated: 2021/12/07 17:43:09 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Concatenate two strings into a new string (with malloc).
 **
 ** "Allocates (with malloc(3)) and returns a new string, which is the result of
 ** the concatenation of s1 and s2."
 **
 ** @param[in]  s1 the first string.
 ** @param[in]  s2 the second string.
 ** @return     A string made of s1 + s2 or NULL.
 */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	char	*p3;

	s3 = malloc (sizeof (*s3) * (ft_strlen (s1) + ft_strlen (s2) + 1));
	if (!s3)
		return (NULL);
	p3 = s3;
	while (*s1)
		*p3++ = *s1++;
	while (*s2)
		*p3++ = *s2++;
	*p3 = 0;
	return (s3);
}
