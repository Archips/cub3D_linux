/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:39:03 by cvidon            #+#    #+#             */
/*   Updated: 2022/03/14 14:54:42 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** @brief      Convert ASCII string to integer.
 **
 ** "The atoi() function converts the initial portion of the string pointed to
 ** by str to int representation."
 **
 ** @see        ATOI(3) <stdlib.h>
 */

int	ft_atoi(char const *str)
{
	int		sign;
	size_t	nb;

	while (ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	nb = 0;
	while (*str && ft_isdigit(*str))
	{
		nb = nb * 10 + (size_t)(*str) - '0';
		str++;
	}
	return ((int)nb * sign);
}
