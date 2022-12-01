/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:40:22 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:40:22 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Locate a substring in a string.
 **
 ** "The strnstr() function locates the first occurrence of the null-terminated
 ** string needle in the string haystack, where not more than len characters are
 ** searched.  Characters that appear after a ‘\0’ character are not searched.
 ** Since the strnstr() function is a FreeBSD specific API, it should only be
 ** used when portability is not a concern."
 **
 ** @see        STRNSTR(3) <string.h>
 */

char	*ft_strnstr(char const *haystack, char const *needle, size_t len)
{
	int		i;
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *)(unsigned long)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && len >= needle_len)
	{
		i = 0;
		while (haystack[i] == needle[i] && needle[i])
			i++;
		if (needle[i] == '\0')
			return ((char *)(unsigned long)haystack);
		haystack++;
		len--;
	}
	return (0);
}
