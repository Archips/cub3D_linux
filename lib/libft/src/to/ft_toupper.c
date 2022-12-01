/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:40:30 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:40:33 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Upper case to upper case letter conversion.
 **
 ** "The toupper() function converts an upper-case letter to the corresponding
 ** upper-case letter.  The argument must be representable as an unsigned char or
 ** the value of EOF."
 **
 ** @see        TOUPPER(3) <ctype.h>
 */

int	ft_toupper(int c)
{
	return (c - (c >= 'a' && c <= 'z') * 32);
}
