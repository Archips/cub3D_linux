/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_s1.c                               :+:      :+:    :+:   */
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
 ** @param[in]  s1 the first string (will be free).
 ** @param[in]  s2 the second string.
 ** @return     A string made of s1 + s2.
 */

char	*ft_strjoin_free_s1(char *s1, char const *s2)
{
	char	*p1;
	char	*s3;

	p1 = s1;
	s3 = ft_strjoin (s1, s2);
	if (p1)
	{
		free (p1);
		p1 = NULL;
	}
	return (s3);
}
