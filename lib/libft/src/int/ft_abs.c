/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 07:35:45 by cvidon            #+#    #+#             */
/*   Updated: 2022/01/28 07:42:15 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Compute the absolute value of an integer.
 **
 ** The abs() function computes the absolute value of the integer argument j.
 **
 ** @see        ABS(3) <stdlib.h>
 */

int	ft_abs(int j)
{
	return (j * ((j > 0) - (j < 0)));
}
