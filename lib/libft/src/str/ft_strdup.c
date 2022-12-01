/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:40:05 by cvidon            #+#    #+#             */
/*   Updated: 2021/12/02 18:17:50 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Save a copy of a string.
 **
 ** "The strdup() function allocates sufficient memory for a copy of the string
 ** s1, does the copy, and returns a pointer to it.  The pointer may
 ** subsequently be used as an argument to the function free(3)."
 **
 ** @see        STRDUP(3) <string.h>
 */

char	*ft_strdup(char const *str)
{
	char	*dup;
	char	*ptr;

	dup = malloc (sizeof (*dup) * (ft_strlen(str) + 1));
	if (!dup)
		return (NULL);
	ptr = dup;
	while (*str)
		*ptr++ = *str++;
	*ptr = 0;
	return (dup);
}
