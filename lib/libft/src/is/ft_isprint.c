/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:39:13 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:39:13 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Check for any printable character including space.
 **
 ** @see        ISPRINT(3) <ctype.h>
 */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
