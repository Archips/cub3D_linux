/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:39:11 by cvidon            #+#    #+#             */
/*   Updated: 2021/11/29 15:39:11 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Check for a digit (0 through 9).
 **
 ** @see        ISDIGIT(3) <ctype.h>
 */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
