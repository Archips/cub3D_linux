/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 07:38:38 by cvidon            #+#    #+#             */
/*   Updated: 2022/01/28 07:44:30 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Return the biggest of two numbers.
 **
 ** @param[in]  a a number.
 ** @param[in]  b a number.
 ** @return     The biggest number between a and b.
 */

int	ft_max(int a, int b)
{
	return (a * (a >= b) + b * (a < b));
}
