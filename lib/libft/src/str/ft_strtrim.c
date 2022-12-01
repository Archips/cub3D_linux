/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:40:24 by cvidon            #+#    #+#             */
/*   Updated: 2021/12/01 08:23:38 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief		Trim beginning and end of string with specified characters.
 **
 ** "Description Allocates (with malloc(3)) and returns a copy of s1 with the
 ** characters specified in set removed from the beginning and the end of the
 ** string."
 **
 ** @param[in]	s1 a string to be trimmed.
 ** @param[in]	set a set of characters to trim.
 **
 ** @return		The trimmed string or NULL.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	while (*s1 && ft_strchr (set, *s1))
		s1++;
	i = ft_strlen (s1);
	while (i && ft_strchr (set, s1[i]))
		i--;
	return (ft_substr (s1, 0, i + 1));
}
