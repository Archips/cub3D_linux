/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:39:14 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:39:14 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Convert integer to ASCII string.
 **
 ** "Allocates (with malloc(3)) and returns a string representing the integer
 ** received as an argument.  Negative numbers must be handled"
 **
 ** @param[in]  n an integer value.
 ** @return     A string representing the integer of NULL.
 */

char	*ft_itoa(int n)
{
	long	ln;
	size_t	len;
	size_t	sign;
	char	*str;

	ln = n;
	sign = 0;
	if (ln < 0)
	{
		sign++;
		ln = -ln;
	}
	len = ft_numlen(ln) + sign;
	str = malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len)
	{
		str[--len] = (char)(ln % 10) + '0';
		ln /= 10;
	}
	if (sign)
		str[len] = '-';
	return (str);
}
