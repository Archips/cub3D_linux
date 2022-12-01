/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:40:18 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:40:18 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Compare strings.
 **
 ** "The strncmp() function compares not more than n characters.  Because
 ** strncmp() is designed for comparing strings rather than binary data,
 ** characters that appear after a ‘\0’ character are not compared."
 **
 ** @see        STRNCMP(3) <string.h>
 */

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
