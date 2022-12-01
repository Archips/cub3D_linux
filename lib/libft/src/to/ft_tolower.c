/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:40:29 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:40:29 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Upper case to lower case letter conversion.
 **
 ** "The tolower() function converts an upper-case letter to the corresponding
 ** lower-case letter.  The argument must be representable as an unsigned char or
 ** the value of EOF."
 **
 ** @see        TOLOWER(3) <ctype.h>
 */

int	ft_tolower(int c)
{
	return (c + (c >= 'A' && c <= 'Z') * 32);
}
