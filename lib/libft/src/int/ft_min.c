/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 07:38:24 by cvidon            #+#    #+#             */
/*   Updated: 2022/01/28 07:42:23 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Return the smallest of two numbers.
 **
 ** @param[in]  a a number.
 ** @param[in]  b a number.
 ** @return     The smallest number between a and b.
 */

int	ft_min(int a, int b)
{
	return (a * (a <= b) + b * (a > b));
}
