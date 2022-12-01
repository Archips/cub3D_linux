/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:40:06 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/30 17:35:05 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Applies a function on each character of a string.
 **
 ** "Applies the function f on each character of the string passed as argument,
 ** passing its index as first argument. Each character is passed by address to
 ** f to be modified if necessary."
 **
 ** @param[in]  s a string.
 ** @param[in]  f a function.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
