/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:40:23 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:40:23 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Locate a character in string.
 **
 ** "The strrchr() function is identical to strchr(), except it locates the last
 ** occurrence of c."
 **
 ** @see        STRRCHR(3) <string.h>
 */

char	*ft_strrchr(char const *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i && s[i] != (unsigned char)c)
		i--;
	if (s[i] == (unsigned char)c)
		return ((char *)(unsigned long)(s + i));
	else
		return (0);
}
