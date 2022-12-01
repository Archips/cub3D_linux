/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 07:38:24 by cvidon            #+#    #+#             */
/*   Updated: 2022/01/28 07:42:23 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Return the string len of a digital number.
 **
 ** @param[in]  ln a number.
 ** @return     ln length (ie. for ln=10 len=2)
 */

size_t	ft_numlen(long ln)
{
	size_t	len;

	len = 1;
	while (ln >= 10)
	{
		ln = ln / 10;
		len++;
	}
	return (len);
}
