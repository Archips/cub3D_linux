/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:39:13 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:39:13 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      White-space character test.
 **
 ** "The isspace() function tests for the white-space characters.  For any
 ** locale, this includes the following standard characters:
 ** '\t' '\n' '\v' '\f' '\r' ' '"
 **
 ** @see        ISSPACE(3) <ctype.h>
 */

int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}
